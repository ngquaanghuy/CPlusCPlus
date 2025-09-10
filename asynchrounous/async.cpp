#include <iostream>
#include <future>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    auto futur = std::async(launch::async, []() {
        this_thread::sleep_for(chrono::seconds(3));
        return 42;
    });

    cout << "Doing other work" << endl;
    cout << "Result: " << futur.get() << endl;

    return 0;
}