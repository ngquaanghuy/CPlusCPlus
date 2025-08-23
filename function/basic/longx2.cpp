#include <iostream>

using namespace std;

long long add(long long a, long long b) {
    return a + b;
}

int main() {
    cout << add(1000000000000, 2000000000000) << endl;
    return 0;
}