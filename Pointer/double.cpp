#include <iostream>

using namespace std;

int main() {
    int x = 52;
    int *p = &x;
    int **pointer = &p;

    cout << "P: " << p << endl;
    cout << "*P: " << *p << endl;
    cout << "&P: " << &p << endl;

    cout << "**PP: " << **pointer << endl;
    cout << "*PP: " << *pointer << endl;
    cout << "&P: " << &pointer << endl;

    return 0;
}