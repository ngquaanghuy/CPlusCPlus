#include <iostream>

using namespace std;
void set(int &x) {
    x = 50;
}
int main() {
    int b = 500;
    cout << b << endl;
    set(b);
    cout << b << endl;
    return 0;
}