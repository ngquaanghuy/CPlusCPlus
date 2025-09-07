#include <iostream>

using namespace std;

template<typename T, typename U, typename C>
auto skid(T a, U b, C c) {
    return a + b * c;
}

int main() {
    cout << skid(10, 20, 100) << endl;
    return 0;
}