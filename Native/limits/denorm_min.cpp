#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Denorm min (int): " << numeric_limits<int>::denorm_min() << endl;
    cout << "Denorm min (float): " << numeric_limits<float>::denorm_min() << endl;
    return 0;
}