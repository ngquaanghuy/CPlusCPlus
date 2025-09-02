#include <iostream>

using namespace std;

int main() {
    int a = 50;
    int &b = a;
    cout << b << endl;
    b = 500;
    cout << a << endl;
    return 0;
}