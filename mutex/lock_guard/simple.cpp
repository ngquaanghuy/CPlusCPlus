#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx;

int share_counter = 0;

void in() {
    std::lock_guard<std::mutex> lock(mtx);
    for (int i = 0; i < 5000000; i++) {
        ++share_counter;
    }
}

int main() {
    std::thread t1([]() {
        in();
        return 42;
    });
    std::thread t2([]() {
        in();
        return 0;
    });
    t1.join();
    std::cout << share_counter << std::endl;
    t2.join();
    std::cout << share_counter << std::endl;
    return 0;
}