#include <iostream>
#include <random>

using namespace std;

int main() {
    minstd_rand base_engine(unsigned(42));
    shuffle_order_engine<minstd_rand, 256> shuffler(base_engine);
    uniform_int_distribution<int> dist(1, 100);

    for (int i = 0; i < 5;i++) {
        cout << dist(shuffler) << endl;
    }
    return 0;
}