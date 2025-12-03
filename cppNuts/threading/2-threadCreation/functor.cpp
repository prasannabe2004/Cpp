// TOPIC: Different Types Of Thread Creation And Calling.
// There are 5 different types of creating threads and calling callable in
// threads.

#include <iostream>
#include <thread>
using namespace std;

// 3. Functor (Function Object)

class Base {
   public:
    void operator()(int x) {
        while (x-- > 0) {
            cout << x << endl;
        }
    }
};

int main() {
    std::thread t((Base()), 10);
    t.join();
    return 0;
}