#include <iostream>
#include <functional>
using namespace std;

function<int(int, int)> operation;

int multiply(int a, int b) {
    return a * b;
}
int main() {
    operation = [](int a, int b) {
        return a + b;
    };
    cout << "Add: " << operation(50, 60) << endl;
    operation = multiply;
    cout << "Multiply: " << operation(50, 70) << endl;
    return 0;
}