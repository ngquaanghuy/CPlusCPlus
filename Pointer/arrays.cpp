#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3};
    int *p = arr; // &arr[0]
    cout << "Value 1: " << *p << endl;
    cout << "value 2: " << *(p + 1) << endl;
    cout << "Value 3: " << *(p + 2) << endl;

    // Address
    cout << "Address 1: " << p << endl;
    cout << "Address 2: " << (p + 1) << endl;
    cout << "Address 3: " << (p + 2) << endl;
    // Moi phan tu trong arrays deu la int, nen no se nhay dung kich thua cua int ( 4 bytes)
    return 0;
}