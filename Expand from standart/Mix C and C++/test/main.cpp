#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

extern "C" {
    void audio();
    void replay();
    void done();
}

int main() {
    audio();
    this_thread::sleep_for(chrono::seconds(5));
    replay();
    this_thread::sleep_for(chrono::seconds(5));
    done();
    cout << "Done..." << endl;
    return 0;
}