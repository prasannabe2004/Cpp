// TOPIC: Different Types Of Thread Creation And Calling.
// There are 5 different types of creating threads and calling callable in
// threads.

#include <iostream>
#include <thread>
using namespace std;

// 4. Non-static member function

class Base {
   public:
    void run(int x) {
        while (x-- > 0) {
            cout << x << endl;
        }
    }
};

int main() {
    Base b;
    std::thread t(&Base::run, &b, 10);
    t.join();
    return 0;
}