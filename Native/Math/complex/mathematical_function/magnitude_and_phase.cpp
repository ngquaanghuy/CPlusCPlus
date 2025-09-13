#include <iostream>
#include <complex>
using namespace std;

void math() {
    complex<double> z1(3.0, 4.9);

    // Magnitude and Phase
    double magnitude = abs(z1.real()); // gia tri toi da cua mot du lieu
    double phase = arg(z1.real()); // tra ve gia tri la goc (yeu cau dau vao la thuoc kieu gia tri radians)
    double normm = norm(z1.real()); //  |z|² = real(z)² + imag(z)² - tra ve mot so thuc khong am

    double mag = abs(z1.imag());
    double pha = arg(z1.imag());
    double nor = norm(z1.imag());
    cout << "Magnitude and Phase" << endl;
    cout << "[Real - Magnitude] " << magnitude << endl;
    cout << "[Real - Phase] " << phase << endl;
    cout << "[Real - Normal] " << normm << endl;
    cout << "[Imag - Magnicatude] " << mag << endl;
    cout << "[Imag - Phase] " << pha << endl;
    cout << "[Imag - Normal] " << nor << endl;
}

int main() {
    math();
    return 0;
}