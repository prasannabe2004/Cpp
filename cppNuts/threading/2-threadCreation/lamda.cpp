// TOPIC: Different Types Of Thread Creation And Calling.
// There are 5 different types of creating threads and calling callable in
// threads.

#include <iostream>
#include <thread>
using namespace std;

// 2. Lambda Function
// Example:

int main() {
    // we can directly inject lambda at thread creation time.
    auto fun = [](int x) {
        while (x-- > 0) {
            cout << x << endl;
        }
    };

    std::thread t(fun, 10);
    t.join();
    return 0;
}