#include <iostream>
using namespace std;


int setMax(int a) {
    if (a > 300) {
        throw overflow_error("Integer overflow");
    }
    cout << a << endl;
    return 1;
}

int main() {
    try {
        cout << setMax(3000) << endl;
    }
    catch (const overflow_error& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}