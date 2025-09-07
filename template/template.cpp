#include <iostream>

using namespace std;
template<typename T>
T sum(T a, T b) {
    return a + b;
}

int main() {
    cout << "Sum(10 + 30): " << sum(10, 30) << endl;
    return 0;
}