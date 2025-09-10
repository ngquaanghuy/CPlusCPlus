#include <iostream>
#include <future>
#include <thread>

using namespace std;

auto get_id(int choice) {
    if (choice == 1) {
        // skip
    } else if (choice == 2) {
        throw runtime_error("Exit processs");
    } else {
        throw overflow_error("Invalid");
    }
    return this_thread::get_id();
}

int main() {
    auto threads = async(launch::async, get_id, 1);

    cout << "Thread id: " << threads.get() << endl;
    return 0;
}