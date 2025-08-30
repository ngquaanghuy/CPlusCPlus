#include <iostream>

using namespace std;

int main() {
    auto hello = []() {
        cout << "Hello LAmbda" << endl;
    };
    hello();
    return 0;
}
