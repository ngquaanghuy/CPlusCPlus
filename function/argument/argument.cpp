#include <iostream>

using namespace std;

void var(int a, int b, int c);

void var(int a, int b, int c) {
    if (a > 1) {
        cout << "a > 1" << endl;
    }
    if (b > 10) {
        cout << "b > 10" << endl;
    }
    if (c > 100) {
        cout << "c > 100" << endl;
    }
}

int main() {
    var(2, 20, 200);
    return 0;
}