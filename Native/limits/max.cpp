#include <iostream>
#include <limits>
#include <cstdint>
using namespace std;

int main() {
    cout << "Max int: " << numeric_limits<int>::max() << endl;
    cout << "Max double: " << numeric_limits<double>::max() << endl;
    cout << "Max float: " << numeric_limits<float>::max() << endl;
    cout << "Max char: " << numeric_limits<char>::max() << endl;
    cout << "Max string: " << numeric_limits<string>::max() << endl;
    cout << "Max bool: " << numeric_limits<bool>::max() << endl;
    cout << "Max long: " << numeric_limits<long>::max() << endl;
    cout << "Max long long: " << numeric_limits<long long>::max() << endl;
    cout << "Max short: " << numeric_limits<short>::max() << endl;
    cout << "Max unsigned int: " << numeric_limits<unsigned int>::max() << endl;
    cout << "Max unsigned long: " << numeric_limits<unsigned long>::max() << endl;
    cout << "Max unsigned long long: " << numeric_limits<unsigned long long>::max() << endl;
    cout << "Max unsigned short: " << numeric_limits<unsigned short>::max() << endl;
    cout << "Max uint64_t: " << numeric_limits<uint64_t>::max() << endl;
    return 0;
}
