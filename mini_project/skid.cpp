#include <iostream>


using namespace std;

int main() {
    int integer;
    cout << "Nhap so duong: ";
    cin >> integer;
    for (int i = 0; i < integer; i++) {
        cout << string(i, '*') << endl;
    }
    return 0;
}