#include <iostream>
using namespace std;

void f() {
    int cx = 0; // lifetime: khi ham f duoc chay
    static int dx = 5; //  lifetime: suot thoi gian chay ma
}

int main() {
    f();
    return 0;
}