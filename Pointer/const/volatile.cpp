#include <iostream>

using namespace std;

int main() {
    volatile int reg = 600;
    int *p = (int*)&reg;
    cout << *p << endl;
    reg = 5000;
    cout << *p << endl;
    return 0;
}