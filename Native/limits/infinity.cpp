#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Infinity (int): " << numeric_limits<int>::infinity() << endl;
    cout << "Infinity (float): " << numeric_limits<float>::infinity() << endl;
    cout << "Infinity (unsigned long long): " << numeric_limits<unsigned long long>::infinity() << endl;
    return 0;
}