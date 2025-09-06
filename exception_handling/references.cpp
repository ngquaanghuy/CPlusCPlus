#include <iostream>

using namespace std;

int main() {
    try {
        throw underflow_error("Skibidi error");
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}