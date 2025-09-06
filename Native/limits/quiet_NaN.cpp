#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Quiet NaN (int): " << numeric_limits<int>::quiet_NaN() << endl;
    cout << "Quiet NaN (unsigned long long): " << numeric_limits<unsigned long long>::quiet_NaN() << endl;
    cout << "Quiet NaN (float): " << numeric_limits<float>::quiet_NaN() << endl;
    cout << "Quiet NaN (string): " << numeric_limits<string>::quiet_NaN() << endl;
    return 0;
}