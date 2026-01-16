// @file async.cpp
#include <chrono>
#include <future>
#include <iostream>

/*
The async function is executed in the background while main is excecuting
*/
int square(int x) {
    std::this_thread::sleep_for(std::chrono::seconds(5));
    return x * x;
}

int main() {
    std::future<int> asyncFunction = std::async(&square, 12);
    for (int i = 0; i < 10; i++) {
        std::cout << square(i) << std::endl;
    }

    // We are blocked at the 'get()' operation, until our
    // result has computed
    int result = asyncFunction.get();

    std::cout << "result is: " << result << std::endl;

    return 0;
}