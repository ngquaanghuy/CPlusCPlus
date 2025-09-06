#include <iostream>

int rawException(int abc) {
    if (abc < 500) {
        throw "Error";
    }
    return abc;
}
using namespace std;

int main() {
    try {
        cout << rawException(5) << endl;
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}