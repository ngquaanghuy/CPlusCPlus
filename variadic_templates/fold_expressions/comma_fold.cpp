#include <iostream>
#include <limits>
using namespace std;


template<typename... Args> void print_all(Args... args) {
    ((cout << args << " "), ...);
    cout << "\n";
}

int main() {
    print_all("Hello World", 3.14, 300, numeric_limits<unsigned long long>::max());
    return 0;
}