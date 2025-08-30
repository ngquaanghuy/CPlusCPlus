#include <iostream>

using namespace std;

int main() {
    int a = 5000;
    auto lambda = [a]() mutable {
        a += 1000;
        cout << a << endl;
        return a;
    };
    cout << a << endl;
    cout << lambda() << endl;
    return 0;
}