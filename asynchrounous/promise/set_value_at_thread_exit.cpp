#include <iostream>
#include <future>
#include <chrono>
#include <thread>

using namespace std;

void deferred_value() {
    promise<int> prom;
    future<int> sf = prom.get_future();


    thread threads([prom = move(prom)] () mutable {
        int result = 42;

        prom.set_value_at_thread_exit(result);

        cout << "Cleaning up ..." << endl;
        this_thread::sleep_for(chrono::seconds(2));
    });


    cout << "Waiting for result" << endl;
    cout << sf.get() << endl;
    threads.join();
}


int main() {
    deferred_value();
    return 0;
}