#include <iostream>

using namespace std;

int main() {
    constexpr auto lambda = [](int x, int y, int z) constexpr {
        return x = y * z;
    };
    constexpr int result = lambda(100, 200, 300);
    cout << result << endl;
    return 0;
}