#include <iostream>

using namespace std;

auto check(auto type) {
    if (type == nullptr) {
        cout << "Nullptr" << endl;
    } else {
        cout << "Pointer" << endl;
    }
    return 0;
}
int main() {
    int *ptr = nullptr;
    check(ptr);
    int num = 500;
    ptr = &num;
    check(ptr);
    return 0;
}