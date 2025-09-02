#include <iostream>

using namespace std;

int main() {
    int r = 244;
    int &s = r;
    cout << r << endl;
    s = 5000;
    cout << r << endl;
    return 0;
}