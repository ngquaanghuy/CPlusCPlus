#include <iostream>

using namespace std;

template<typename... Args> auto product(Args... args) {
    return (args * ... * 1);
}

int main() {
    cout << product(10, 2) << endl;
    return 0;
}