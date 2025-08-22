#include <iostream>
#include <cstdint>
using namespace std;

int main() {
    int query = 5;
    string w = "compiletion";
    char *e = "c";
    float r = 3.123;
    double t = 3.13433443;
    long y = 400000;
    long long u = 400000000;
    unsigned long long i = 5000000000;
    signed int o = 40000000;
    bool p = true;

    // unsgined = x2
    // unsigned = 255
    // signed = -255 - 255
    cout << query << endl;
    cout << e << endl;
    cout << r << endl;
    cout << t << endl;
    cout << y << endl;
    cout << u << endl;
    cout << i << endl;
    cout << o << endl;
    cout << p << endl;
    return 0;
}