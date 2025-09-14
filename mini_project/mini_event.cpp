#include <iostream>

using namespace std;

void menu() {
    cout << "--- Bang thanh phan ---" << endl;
    cout << " --- 1.Exception: " << endl;
    cout << "   --- 1.1: Runtime error" << endl;
    cout << "   --- 1.2: Logic error" << endl;
    cout << "   --- 1.3: Underflow error" << endl;
    cout << "   --- 1.4: Overflow error" << endl;
}

auto handling(auto choice) {
    if (choice == 1.1) {
        try {
            throw runtime_error("Runtime Error");
        } catch (const exception& error) {
            cout << "Caught exception: " << error.what() << endl;
        }
    }
    return 1;
}

int running() {
    double type = 0.0005;
    menu();
    cout << "Input: ";
    cin >> type;
    if (type == 0.0005) {
        throw runtime_error("Invalid");
    }
    handling(type);
    return 1;
}
int main() {
    running();
    return 0;
}