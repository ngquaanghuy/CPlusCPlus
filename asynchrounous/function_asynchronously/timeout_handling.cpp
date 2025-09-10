#include <chrono>
#include <future>
#include <thread>
#include <iostream>

using namespace std;

auto fuck = async(launch::async, []() {
    this_thread::sleep_for(chrono::seconds(1));
    return 01;
});

int main() {
    if (fuck.wait_for(chrono::seconds(2)) == future_status::timeout) {
        cout << "Timeout" << endl;
    } else {
        cout << "Result: " << fuck.get() << endl;
    }
    return 0;
}