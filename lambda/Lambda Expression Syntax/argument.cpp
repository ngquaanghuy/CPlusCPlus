#include <iostream>

using namespace std;

int main() {
    auto lambda = [](int x, int y) -> int {
        return x * y;
    };
    cout << lambda(4, 1000) << endl;
    return 0;
}