#include <iostream>
#include <complex>

using namespace std;

int main() {
    complex<double> a(3.0, 4.0); // 3 + 4i
    complex<double> b(2.0, 4.0); // a
    cout << "Complex" << endl;
    cout << a << endl;
    cout << b << endl;
    // Basic arithmetic
    auto sum = a + b;
    auto diff = a - b;
    auto nhan = a * b;
    auto chia = a / b;

    cout << "Arithmetic" << endl;
    cout << sum << endl;
    cout << diff << endl;
    cout << nhan << endl;
    cout << chia << endl;

    // Compound assignment
    cout << "Assignment" << endl;
    a += b;
    cout << a << endl;
    a -= b;
    cout << a << endl;
    a *= b;
    cout << a << endl;
    a /= b;
    cout << a << endl;
    // Unary operations
    cout << "Unary operations" << endl;
    auto neg = -a;
    cout << neg << endl;
    auto conj = std::conj(a);
    cout << conj << endl;
    return 0;
}