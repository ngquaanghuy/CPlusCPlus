#include <iostream>

using namespace std;
void pirnt(string &&message);
void print(const string &message);

void print(string &&message) {
    cout << message << endl;
    cout << "This is an rvalue" << endl;
}
void print(const string &message) {
    cout << message << endl;
    cout << "This is an lvalue" << endl;
}

int main() {
    print("Hello, World!"); // This is an rvalue 
    string text = "Hello, C++!";
    print(text); // this is an lvalue
    return 0;
}

// Note
// rvalue: A temporary object or value that does not have a persistent memory address. It is typically used on the right side of an assignment.
// lvalue: Lvalue is an expression that has a fixed address (its address can be obtained by using & ) and it can stand on the right or left side of an associative operation.