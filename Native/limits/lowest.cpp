#include <iostream>
#include <limits>
using namespace std;

int main() {
    cout << "Lowest int: " << numeric_limits<int>::lowest() << endl;
    cout << "Lowest float: " << numeric_limits<float>::lowest() << endl;
    cout << "Lowest double: " << numeric_limits<double>::lowest() << endl;
    cout << "Lowest bool: " << numeric_limits<bool>::lowest() << endl;
    cout << "Lowest char: " << numeric_limits<char>::lowest() << endl;
    cout << "Lowest string: " << numeric_limits<string>::lowest() << endl;
    cout << "Lowest short: " << numeric_limits<short>::lowest() << endl;
    cout << "Lowest long: " << numeric_limits<long>::lowest() << endl;
    cout << "Lowest long long: " << numeric_limits<long long>::lowest() << endl;
    cout << "Lowest unsigned long long: " << numeric_limits<unsigned long long>::lowest() << endl;
    cout << "Lowest unsigned short: " << numeric_limits<unsigned short>::lowest() << endl;
    cout << "Lowest unsigned int: " << numeric_limits<unsigned int>::lowest() << endl;
    return 0;
}

// lowest tuc la so lon nhat