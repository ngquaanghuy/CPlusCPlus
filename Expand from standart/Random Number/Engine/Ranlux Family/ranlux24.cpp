#include <iostream>
#include <random>

using namespace std;

int main() {
    ranlux24 eng(unsigned(42));
    uniform_int_distribution<int> dist(1, 100);
    for (int i = 0; i < 5; i++) {
        cout << dist(eng) << endl;
    }
    return 0;
}