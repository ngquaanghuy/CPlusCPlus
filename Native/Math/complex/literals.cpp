#include <iostream>
#include <complex>

using namespace std;

int main() {
    using namespace std::complex_literals; // C++14

    auto z1 = 4.0 + 2i;
    cout << z1.real() << endl;
    cout << z1.imag() << endl;

    auto z2 = 4.5f + 4if;
    cout << z2.real() << endl;
    cout << z2.imag() << endl;
    return 0;
}