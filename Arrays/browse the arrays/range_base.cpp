#include <iostream>

using namespace std;

int main() {
    int arrays[5] = {1, 2, 3, 4, 5};
    for (int x : arrays) {
        cout << x << endl;
    }
    return 0;
}