#include <iostream>

using namespace std;

void print(const int &x) {
    cout << x << endl;
}
int main() {
    int a = 500;
    print(a);
    print(5000);
    return 0;
}