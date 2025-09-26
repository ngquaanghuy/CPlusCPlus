#include <iostream>
#include <random>

using namespace std;

int main() {
    random_device rd;
    auto seed = rd();
    minstd_rand engine(seed);
    uniform_int_distribution<int> dist(1, 100);
    cout << "Seed: " << seed << endl;
    for (int i = 0; i < 5;i++) {
        cout << dist(engine) << endl;
    }
    return 0;
}