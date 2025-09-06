#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Epsilon (int): " << numeric_limits<int>::epsilon() << endl;
    cout << "Epsilon (float): " << numeric_limits<float>::epsilon() << endl;
    cout << "Epsilon (double): " << numeric_limits<double>::epsilon() << endl;
    return 0;
}