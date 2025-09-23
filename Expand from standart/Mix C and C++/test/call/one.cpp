#include <iostream>

using namespace std;
extern "C" void sum(int a, int b);
int main() {
    sum(10, 20);
    return 0;
}