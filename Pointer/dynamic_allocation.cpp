#include <iostream>

using namespace std;

int main() {
    int* ptr = new int(400);
    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
    return 0;
}