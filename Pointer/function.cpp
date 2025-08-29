#include <iostream>

using namespace std;

void hello() {
    cout << "Hello World" << endl;
}

auto add(auto x, auto y) {
    return x + y;
}

int main() {
    void (*fptr)() = hello;
    fptr();

    int (*addr)(int, int) = add;
    cout << addr(100, 300) << endl;
    return 0;
}