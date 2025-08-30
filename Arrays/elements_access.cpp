#include <iostream>

using namespace std;

int main() {
    int arrays[] = {1, 2, 3, 4, 5};
    cout << arrays[0] << endl;
    arrays[0] = 100;
    cout << arrays[0] << endl;
    return 0;
}