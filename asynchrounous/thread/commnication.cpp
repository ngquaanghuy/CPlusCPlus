#include <iostream>
#include <thread>
#include <future>

using namespace std;

void asyncc(std::promise<int> pro) {
    pro.set_value(100);
}

int GetData(const string uid) {
    if (uid == "BOSS") {
        return 443;
    } else if (uid == "PLAYER") {
        return 444;
    } else if (uid == "NPC") {
        return 445;
    } else {
        throw runtime_error("Invalid uid");
    }
}
int main() {
    std::promise<int> pro;
    future<int> full = pro.get_future();
    thread t(asyncc, move(pro));
    
    cout << GetData("BOSS") << endl;
    cout << GetData("NPC") << endl;
    cout << full.get() << endl;
    cout << GetData("PLAYER") << endl;
    try {
        GetData("CUSTOMIZE");
    } catch (const exception &error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}