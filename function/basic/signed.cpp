#include <iostream>

using namespace std;

// signed = int
signed add(signed x, signed y) {
    return x + y;
}
int main() {
    signed a = -5;
    signed b = 10;
    cout << "Sum: " << add(a, b) << endl; // Output: Sum: 5
    return 0;
}