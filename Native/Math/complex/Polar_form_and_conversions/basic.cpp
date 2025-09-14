#include <iostream>
#include <complex>

using namespace std;

void polar_form() {
    complex<double> z(10.0, sqrt(3.0)); // 10.0 + can bac 3i
    double r = abs(z);
    double theta = arg(z);

    cout << "Polar form" << endl;
}