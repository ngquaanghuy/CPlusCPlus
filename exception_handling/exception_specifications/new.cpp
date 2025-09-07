#include <iostream>

using namespace std;

void func(const string &&choice) noexcept {
    if (choice == "one") {
        throw underflow_error("Underflow Error");
    }
    if (choice == "two") {
        throw runtime_error("Runtime error");
    }
    cout << "Noexcept" << endl;
}

int main() {
    try {
        func("two");
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}