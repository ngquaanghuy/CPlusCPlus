#include <iostream>

using namespace std;

void func(const string choice) throw(int, std::runtime_error) {
    if (choice == "one") {
        throw 502;
    }
    if (choice == "two") {
        throw runtime_error("Runtime error");
    }
}


int main() {
    try {
        func("two");
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}