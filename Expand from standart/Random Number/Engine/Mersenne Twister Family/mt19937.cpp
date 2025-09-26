#include <iostream>
#include <random>

using namespace std;

int main() {
    unsigned seed = 42;
    uniform_int_distribution<int> dist(1, 100);
    mt19937 def_eng(seed);
    cout << dist(def_eng) << endl;
    return 0;
}