#include <iostream>
#include <future>
#include <thread>
#include <vector>

using namespace std;

void share() {
    promise<int> prog;
    shared_future<int> sf = prog.get_future().share();

    vector<thread> threads;

    for (int i = 0; i < 10; i++) {
        threads.emplace_back([sf, i]() {
            cout << "Thread: " << i << "got: " << sf.get() << endl;
        });
    }

    prog.set_value(100);
    for (auto& t : threads) {
        t.join();
    }
}


int main() {
    share();
    return 0;
}