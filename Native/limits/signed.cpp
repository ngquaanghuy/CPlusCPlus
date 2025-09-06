#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "Signed (True): " << numeric_limits<int>::is_signed << endl;
    cout << "Signed (False): " << numeric_limits<unsigned int>::is_signed << endl;
    return 0;
}