#include <iostream>

using namespace std;

int main() {
    int a = 500, b = 600;
    auto lambda = [&]() {
        return a + b;
    };
    cout << "Add(500 + 600): " << lambda() << endl;
    return 0;
}