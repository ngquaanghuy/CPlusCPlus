#include <iostream>

using namespace std;

constexpr int add(const int a, const int b) {
    return a + b;
}

int main() {
    cout << add(100, 300) << endl;
    return 0;
}

// add will be evuluated at compile-time
// if you use constants.This helps it increase performance and ensures the return value is constant at compile-time

