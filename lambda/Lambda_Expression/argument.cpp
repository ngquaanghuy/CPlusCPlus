#include <iostream>
using namespace std;

int main() {
    auto hello = [](int x, int y) {
        return x + y;
    };

    cout << "Sum: " << hello(300, 500) << endl;
    return 0;
}
