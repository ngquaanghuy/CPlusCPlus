#include <iostream>

using namespace std;

int error(int abc) {
    if (abc < 50) {
        throw overflow_error("Skibidi error");
    }
    return abc;
}
int main() {
    try {
        cout << "Number: " << error(30) << endl;
    } catch (const overflow_error& error) {
        cout << "Caught Exception: " << error.what() << endl;
    }
    return 0;
}