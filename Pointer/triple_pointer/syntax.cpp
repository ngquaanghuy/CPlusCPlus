#include <iostream>

using namespace std;

int main() {
    int value = 50;
    int *p = &value;
    int **pp = &p;
    int ***ppp = &pp;

    cout << "[Pointer]" << endl;
    cout << "[Address] " << &p << endl;
    cout << "[Value] " << *p << endl;

    cout << "[Double Pointer]" << endl;
    cout << "[Address] " << &pp << endl;
    cout << "[Value] " << **pp << endl;

    cout << "[Triple Pointer]" << endl;
    cout << "[Address] " << &ppp << endl;
    cout << "[Value] " << ***ppp << endl;
    return 0;
}