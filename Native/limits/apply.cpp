#include <iostream>
#include <limits>

using namespace std;

int main() {
    int abc = numeric_limits<int>::max();
    cout << abc << endl;
    return 0;
}