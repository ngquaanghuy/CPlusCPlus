#include <iostream>
#include "expicitly_default_inline.cpp"

using namespace std;

int main() {
    Base obj;
    obj.print("Hello, World!");
    return 0;
}