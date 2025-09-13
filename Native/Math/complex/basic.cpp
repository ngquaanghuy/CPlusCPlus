#include <iostream>
#include <complex>

using namespace std;

int main() {
    complex<double> z1(3.0, 4.0); // 3 + 4i
    complex<double> z2{9.0, -1.0}; // 9  - i

    complex<double> z3 = 5.0; // 5 + 0i
    complex<double> z4; // 0 = 0i

    std::cout << "Real part: " << z1.real() << "\n";
    std::cout << "Imaginary part: " << z1.imag() << "\n";
    return 0;
}