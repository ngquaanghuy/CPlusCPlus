#include <iostream>

using namespace std;

int main() {
    int *arr = new int[5];
    arr[0] = 5;
    arr[1] = 6;
    arr[2] = 7;
    for (int x = 0; x < 5; x++) {
        cout << arr[x] << endl;
    }
    delete [] arr;
    return 0;
}