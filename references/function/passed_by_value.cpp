#include <iostream>

using namespace std;
void display(int x) {
    x = 50;
}
int main() {
    int b = 10;
    cout << b << endl;
    display(b);
    cout << b << endl;
    return 0;
}