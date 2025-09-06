#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Integer tyoe (int): " << numeric_limits<int>::is_integer << endl;
    cout << "Interer type (float): " << numeric_limits<float>::is_integer << endl;
    return 0;
}