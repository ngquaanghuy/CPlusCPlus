#include <iostream>

using namespace std;

void func() throw() {
    if (1 < 2) {
        throw "small";
    }
};

int main() {
    try {
        func();
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}