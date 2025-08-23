#include <iostream>
#include <string>

using namespace std;
int print(int a);
int print(string b);
int print(double c);

int print(int a) {
    cout << "This is an integer: " << a << endl;
    return 0;
}

int print(string b) {
    cout << "This is message: " << b << endl;
    return 0;
}

int print(double c) {
    cout << "This is a double: " << c << endl;
    return 0;
}

int main() {
    print(10);
    print("Hello, World!");
    print(3.14);
    return 0;
}

// So we can have three functions print the same data type as int, but when given inputs of different data types, they will still be recognized.
// This is an example of a stacked data type.