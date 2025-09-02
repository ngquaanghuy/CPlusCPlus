#include <iostream>

using namespace std;
namespace Int {
    int x = 500;
    void print(int abc) {
        x = abc;
        cout << x << endl;
    }
    void printInt() {
            cout << x << endl;
    }
}

int main() {
    int b = 50000;
    Int::print(b);
    cout << b << endl;
    Int::printInt();
    return 0;
}