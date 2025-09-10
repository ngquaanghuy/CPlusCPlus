#include <iostream>
#include <future>
#include <thread>

using namespace std;
auto f2 = async([]() {
    cout << "Running on thread id: " << this_thread::get_id() << endl;
    return 0;
});

int main() {
    cout << "Main thread id: " << this_thread::get_id() << endl;
    f2.get();
    return 0;
}

// compiler su tu chon async hay deferred