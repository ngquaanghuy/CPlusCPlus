#include <iostream>
#include <future>
#include <thread>
using namespace std;

auto f2 = async(launch::deferred, []() {
    cout << "Running when get() is called" << endl;
    cout << "Running on threadss id: " << this_thread::get_id() << endl;
    return 1;
});


int main() {
    cout << "Main thread id: " << this_thread::get_id() << endl;
    f2.get();
    return 0;
}
// se chay tren thread cung voi main