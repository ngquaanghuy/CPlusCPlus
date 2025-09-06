#include <iostream>
#include <limits>
#include <cstdint>
using namespace std;

int main() {
    cout << "Min int: " << numeric_limits<int>::min() << endl;
    cout << "Min double: " << numeric_limits<double>::min() << endl;
    cout << "Min float: " << numeric_limits<float>::min() << endl;
    cout << "Min char: " << numeric_limits<char>::min() << endl;
    cout << "Min string: " << numeric_limits<string>::min() << endl;
    cout << "Min bool: " << numeric_limits<bool>::min() << endl;
    cout << "Min long: " << numeric_limits<long>::min() << endl;
    cout << "Min long long: " << numeric_limits<long long>::min() << endl;
    cout << "Min short: " << numeric_limits<short>::min() << endl;
    cout << "Min unsigned int: " << numeric_limits<unsigned int>::min() << endl;
    cout << "Min unsigned long: " << numeric_limits<unsigned long>::min() << endl;
    cout << "Min unsigned long long: " << numeric_limits<unsigned long long>::min() << endl;
    cout << "Min unsigned short: " << numeric_limits<unsigned short>::min() << endl;
    cout << "Min uint64_t: " << numeric_limits<uint64_t>::min() << endl;
    return 0;
}