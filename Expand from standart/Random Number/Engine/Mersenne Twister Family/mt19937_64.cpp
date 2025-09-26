#include <iostream>
#include <random>

using namespace std;

int main() {
    unsigned seed = 422;
    uniform_int_distribution<int> disk(1, 200);
    mt19937_64 def_eng(seed);
    for(int i = 0; i < 100;i++) {
        cout << disk(def_eng) << " ";
    }
    return 0;
}