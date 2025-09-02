#include <iostream>

using namespace std;

int main() {
    int a = 10, b = 20;
    const int *ptr1 = &a;
    int* const ptr2 = &b;
    const int* const p3 = &a;
    int* volatile ptr4 = &b;
    volatile int* ptr5 = &a;

    ptr1 = &b;
    *ptr2 = 500; // no se chi gan duoc gia tri so, va se khong the gan qua con tro
    // p3 chi doc
    *ptr4 = 500; // gia tri la volatile
    *ptr5 = 788; // chinh pointer la volatile
    return 0;
}