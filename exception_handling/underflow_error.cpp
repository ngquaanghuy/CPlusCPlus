#include <iostream>

using namespace std;
int setMin(int min) {
    if (min < 3000) {
        throw underflow_error("Number is too small");
    }
    return min;
}

int main() {
    try {
        cout << setMin(300) << endl;
    }
    catch (const underflow_error& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}