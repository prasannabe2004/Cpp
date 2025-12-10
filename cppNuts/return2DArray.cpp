#include <iostream>

int** create2DArray(int rows, int cols) {
    int** array = new int*[rows];
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
        for (int j = 0; j < cols; ++j) {
            array[i][j] = i * cols + j;  // Initialize with some values
        }
    }
    return array;
}

#define N 5
struct ArrStruct {
    int array[N][N];
};

ArrStruct createStructWithArray() {
    ArrStruct arrStruct;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            arrStruct.array[i][j] = i + j;  // Initialize with some values
        }
    }
    return arrStruct;
}
/* using function pointer*/
int (*getArrayFunctionPointer())[3] {
    static int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    return array;
}

/* using c++11*/
auto getArray() -> int (*)[3] {
    static int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    return array;
}

/* using typedef*/
typedef int (*ArrayType)[3];
ArrayType getArrayTypedef() {
    static int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    return array;
}

/* using using */
using ArrayTypeUsing = int (*)[3];
ArrayTypeUsing getArrayUsing() {
    static int array[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    return array;
}

int main() {
    int rows = 3;
    int cols = 4;
    int** myArray = create2DArray(rows, cols);
    std::cout << "2D Array created dynamically:" << std::endl;

    // Print the 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << myArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

    ArrStruct myStruct = createStructWithArray();
    // Print the array inside the struct
    std::cout << "Array inside struct:" << std::endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            std::cout << myStruct.array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int (*arrayFromFunction)[3] = getArray();
    // Print the array returned from getArray
    std::cout << "Array from getArray static return from function:"
              << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << arrayFromFunction[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Deallocate memory
    for (int i = 0; i < rows; ++i) {
        delete[] myArray[i];
    }
    delete[] myArray;

    return 0;
}