#include <iostream>
#include <future>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    auto asynchrounous = async(launch::async, []() {
        this_thread::sleep_for(chrono::seconds(3));
        return 100;
    });

    shared_future<int> sf = asynchrounous.share();
    thread thread1([sf] () {
        cout << "Thread 1: " << this_thread::get_id() << endl;
        cout << sf.get() << endl;
    });
        thread thread2([sf] () {
        cout << "Thread 2: " << this_thread::get_id() << endl;
        cout << sf.get() << endl;
    });
        thread thread3([sf] () {
        cout << "Thread 3: " << this_thread::get_id() << endl;
        cout << sf.get() << endl;
    });
    thread1.join();
    thread2.join();
    thread3.join();
    return 0;

}