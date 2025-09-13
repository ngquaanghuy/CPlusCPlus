#include <iostream>
#include <chrono>
#include <string>
#include <thread>
#include <utility>

using namespace std;

template<typename Func, typename... Args> void run_async(int delay, Func&& f, Args&&... args) {
    thread([delay, f = forward<Func>(f), ...args = forward<Args>(args)]() mutable {
        this_thread::sleep_for(chrono::seconds(delay));
        f(args...);
    }).detach();
}


void process(int x, string& s) {
    cout << "Processing: " << x << ", " << s << endl;
}

int main() {
    run_async(2, process, 42, string("Hello WOrld"));
    run_async(2, [](auto x) {
        cout << "Lambda; " << x << endl;
    }, 3.14);

    this_thread::sleep_for(chrono::seconds(2));
}