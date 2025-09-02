#include <iostream>

using namespace std;

int main() {
    int value = 600;
    int b = 500;
    const int *ptr = &value;
    ptr = &b; // gan gia tri qua mot doi tuong khac
}