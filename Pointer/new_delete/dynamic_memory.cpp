#include <iostream>

using namespace std;

int main() {
    int *p = new int(500);
    cout << *p << endl;
    cout << &p << endl;
    delete p;
    return 0;
}