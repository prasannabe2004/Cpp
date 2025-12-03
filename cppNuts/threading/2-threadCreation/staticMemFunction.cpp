// TOPIC: Different Types Of Thread Creation And Calling.
// There are 5 different types of creating threads and calling callable in
// threads.

#include <iostream>
#include <thread>
using namespace std;

// 5. Static member function

class Base {
   public:
    static void run(int x) {
        while (x-- > 0) {
            cout << x << endl;
        }
    }
};

int main() {
    std::thread t(&Base::run, 10);
    t.join();
    return 0;
}