#include <iostream>
#include "process.cpp"
using namespace std;

int main() {
    try {
        process_error();
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}