#include <iostream>
#include <complex>


using namespace std;

void math_function() {
    cout << "Exponontial and logarithm" << endl;
    complex<double> z1(3.0, 4.9);
    auto exp_real = exp(z1.real());
    auto log_real = log(z1.real());
    auto log10_real = log10(z1.real());

    auto exp_imag = exp(z1.imag());
    auto log_imag = log(z1.imag());
    auto log10_imag = log10(z1.imag());

    cout << "Real" << endl;
    cout << "[Exponontial and logarithm - EXP] " << exp_real << endl;
    cout << "[Exponontial and logarithm - LOG] " << log_real << endl;
    cout << "[Exponontial and logarithm - LOG10] " <<  log10_real << endl;

    cout << "[Exponontial and logarithm - EXP] " << exp_imag << endl;
    cout << "[Exponontial and logarithm - LOG] " << log_imag << endl;
    cout << "[Exponontial and logarithm - LOG10] " << log10_imag << endl;
}


int main() {
    math_function();
    return 0;
}

// Note 
// Exp: Ham mu phuc, co cong thuc  e^(a+bi) = e^a × (cos(b) + i×sin(b))
// Log: Logarithm phuc, co cong thuc  log(z) = log(|z|) + i×arg(z)
// Log10: logarit co so 10 phuc, co cong thuc log10(z) = log(z) / log(10)

