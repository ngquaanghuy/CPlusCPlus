#include <iostream>
#include <future>
#include <thread>


using namespace std;

// launch::async - chay tren thread moi ngay lap tuc
auto f2 = async(launch::async, []() {
    cout << "Running on new thread: " << this_thread::get_id() << endl;
    return 1;
});

int main() {
    cout << "Main thread id: " << this_thread::get_id() << endl;
    f2.get();
    return 0;
}