#include <chrono>
#include <future>
#include <thread>

using namespace std;

auto fuck = async(launch::async, []() {
    this_thread::sleep_for(chrono::seconds(5));
    return 01;
});

int main() {
    if (fuck.wait_for(chrono::seconds(2)) == fuck_status::timeout) {
        cout << "Timeout" << endl;
    } else {
        cout << "Rssult: " << fuck.get() << endl;
    }
    return 0;
}