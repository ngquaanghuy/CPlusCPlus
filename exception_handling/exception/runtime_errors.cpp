#include <iostream>

using namespace std;

int test(int a, int b) {
    if (b < a) {
        throw runtime_error("B must be greater than a");
    }
}

int main() {
    try {
        cout << "Testing: " << test(10, 3) << endl;
    }
    catch (const runtime_error& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}