#include <iostream>

using namespace std;
unsigned add(unsigned x, unsigned y) {
    return x + y;
}

int main() {
    unsigned a = 5;
    unsigned b = 10;
    cout << "Sum: " << add(a, b) << endl; // Output: Sum: 15
    return 0;
}