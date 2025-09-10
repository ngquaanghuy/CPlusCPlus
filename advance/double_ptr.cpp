#include <iostream>

using namespace std;

int main() {
    int x = 600;
    int *ptr_1 = &x;
    int **ptr_2 = &ptr_1;

    cout << "Address 1: " << &ptr_1 << endl;
    cout << "Value 1: " << *ptr_1 << endl;
    cout << "Address 2: " << &ptr_2 << endl;
    cout << "Value 2: " << **ptr_2 << endl;
    return 0;
}