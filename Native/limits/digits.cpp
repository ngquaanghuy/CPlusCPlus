#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Digits int: " << numeric_limits<int>::digits << endl;
    cout << "Digits float: " << numeric_limits<float>::digits << endl;
    cout << "Digits double: " << numeric_limits<double>::digits << endl;
    cout << "Digits bool: " << numeric_limits<bool>::digits << endl;
    cout << "Digits char: " << numeric_limits<char>::digits << endl;
    cout << "Digits string: " << numeric_limits<string>::digits << endl;
    cout << "Digits short: " << numeric_limits<short>::digits << endl;
    cout << "Digits long: " << numeric_limits<long>::digits << endl;
    cout << "Digits long long: " << numeric_limits<long long>::digits << endl;
    cout << "Digits unsigned long long: " << numeric_limits<unsigned long long>::digits << endl;
    cout << "Digits unsigned short: " << numeric_limits<unsigned short>::digits << endl;
    cout << "Digits unsigned int: " << numeric_limits<unsigned int>::digits << endl;
    return 0;
}


// digits la kiem tra so bit huu dung (khong tinh signed)