#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int *p = &x;

    cout << "Gia tri: " << *p << endl;
    cout << "Dia chi p: " << p << endl;
    cout << "Dia chi x: " << &x << endl;
    return 0;
}