#include <iostream>

using namespace std;

int main() {
    int a = 500, b = 500;
    auto lambda = [=]() {
        return a + b;
    };

    cout << "Add(500 + 500): " << lambda() << endl;
    return 0;
}
