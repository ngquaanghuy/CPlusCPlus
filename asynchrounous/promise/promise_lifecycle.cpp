#include <iostream>
#include <future>

using namespace std;

// Promise states and lifecycle

void promise_states() {
    promise<int> prom;

    cout << "---- Promise States ----" << endl;
    cout << " -- 1.Empty (moved-from)" << endl;
    cout << " -- 2. Not satisfied (chua set value/exception)" << endl;
    cout << " -- 3. Satisfied ( da set value/exception)" << endl;
    future<int> fuc = prom.get_future();
    try {
        auto fuc2 = prom.get_future();
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }

    prom.set_value(100);

    try {
        prom.set_value(1000);
    } catch (const exception& error) {
        cout << "Caught exceprion: " << error.what() << endl;
    }

    cout << "=> Ket luan: " << "chi co the goi get_future va set_value mot lan" << endl;
}

int main() {
    promise_states();
    return 0;
}