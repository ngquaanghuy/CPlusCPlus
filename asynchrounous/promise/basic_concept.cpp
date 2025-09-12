#include <iostream>
#include <future>
#include <thread>

using namespace std;

void basic_promise() {
    promise<int> promisee;
    future<int> sf = promisee.get_future();

    thread t([&promisee]() {
        cout << "Threading" << endl;
        this_thread::sleep_for(chrono::seconds(5));
        promisee.set_value(100);
    });


    cout << "Result: "  << sf.get() << endl;
    t.join();
}


int main() {
    basic_promise();

    return 0;
}