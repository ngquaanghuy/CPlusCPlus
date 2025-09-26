#include <iostream>
#include <random>

using namespace std;

int main() {
    unsigned seed = 42;
    ranlux48_base eng(seed);
    uniform_int_distribution<int> dist(1, 100);

    for (int i = 0;i < 10;i++) {
        cout << dist(eng) << endl;
    }
    return 0;
}