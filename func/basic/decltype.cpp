#include <iostream>

// example 1
using namespace std;
int a = 5;
decltype (a) b = 10;

auto add(int a, int b) -> decltype(a + b) {
    return a = b;
}
// example 2
decltype (auto) abc(auto a, auto b) {
    return a + b;
}
int main() {
    cout << add(100, 300) << endl;
    cout << abc(100, 200) << endl;
    return 0;
}

// With decltype, it will automatically get the data type that the expression returns at compile time. This point helps you not to know exactly what its data type is, it will automatically assign the data type for you.
