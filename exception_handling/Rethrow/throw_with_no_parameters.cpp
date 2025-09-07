#include <iostream>

using namespace std;

int main() {
    try {
        try {
            throw runtime_error("Runtime error");
        } catch (const exception& error) {
            cout << "Caught exception: " << error.what() << endl;
            throw;
        }
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}