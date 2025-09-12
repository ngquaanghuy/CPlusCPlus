#include <iostream>
#include <future>
#include <thread>
#include <chrono>
using namespace std;

void promisee() {
    promise<void> prom;
    future<void> sf = prom.get_future();


    thread threads([&prom]() {
        cout << "Work" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        prom.set_value();
    });

    sf.wait();
    cout << "Done" << endl;
    threads.join();
}

int main() {
    promisee();
    return 0;
}