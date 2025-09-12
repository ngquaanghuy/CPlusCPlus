#include <iostream>
#include <future>
#include <thread>

using namespace std;

int main() {
    promise<int> prog;
    shared_future<int> sf = prog.get_future().share();

    thread t1([sf]() {
        cout << "Thread 1: " << sf.get() << endl;
        cout << "Thread id 1: " << this_thread::get_id() << endl;
    });

    thread t2([sf]() {
        cout << "Thread 2: " << sf.get() << endl;
        cout << "Thread id 2: " << this_thread::get_id() << endl;
    });

    prog.set_value(100);
    t1.join();
    t2.join();
    return 0;
}