#include <iostream>

extern "C" {
    void abss(int a, int b);
}

int main() {
    abss(10, 2);
    return 0;
}