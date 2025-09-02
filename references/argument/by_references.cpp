#include <iostream>

using namespace std;

void display(int &x)  {
    x = 500;
}

int main() {
    int a = 50000000000;
    cout << a << endl;
    display(a);
    cout << a << endl;
    return 0;
}