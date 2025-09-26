#include <iostream>
#include <random>

using namespace std;

int main() {
    unsigned seed = 42;
    minstd_rand def_eng(seed);
    uniform_int_distribution<int> dist(1, 100);

    for (int i = 0; i < 100;i++) {
        cout << dist(def_eng) << " ";
    }
    return 0;
}