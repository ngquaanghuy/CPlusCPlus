#include <iostream>

using namespace std;

int main() {
    int x = 500;
    int *pointer = &x;
    cout << "Address: " << &pointer << endl;
    cout << "Value: " << *pointer << endl;
    return 0;
}