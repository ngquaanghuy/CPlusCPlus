#include <iostream>
#include <future>
#include <thread>

using namespace std;


void exception_handling() {
    promise<int> prom;
    future<int> sf = prom.get_future();
    thread t1([&prom]()  {
        try {
            throw runtime_error("Something went wrong");
        } catch (const exception& error) {
            prom.set_exception(current_exception());
            cout << "[Thread] -> Caught exception: " << error.what() << endl;
        }
    });

    try {
        int value = sf.get();
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }

    t1.join();
}
int main() {
    exception_handling();
    return 0;
}