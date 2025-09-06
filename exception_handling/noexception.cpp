#include <iostream>

using namespace std;

void log(const string &&key) noexcept {
    if (key != "ABC") {
        throw runtime_error("Noexcept");
    }
    cout << key << endl;
}

int main() {
    try {
       log("nokey");
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}