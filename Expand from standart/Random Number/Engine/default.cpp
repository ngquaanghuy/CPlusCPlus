#include <iostream>
#include <random>

using namespace std;

int main() {
    unsigned seed = 200;
    default_random_engine def_eng(seed);
    uniform_int_distribution<int> dist(0, 100);
    for (int i = 0; i < 100; i++) {
        cout << dist(def_eng) << " ";
    }
}