#include <iostream>
#include <random>

using namespace std;

int main() {
    unsigned seed = 42;
    minstd_rand0 eng(seed);
    uniform_int_distribution<int> dist(1, 100);
    for (int i = 0;i < 5;i++) {
        cout << dist(eng) << " ";
    }
    return 0;
}