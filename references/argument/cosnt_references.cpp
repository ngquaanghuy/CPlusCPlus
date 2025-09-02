#include <iostream>

using namespace std;


void print(const string &msg) {
    cout << msg << endl;
}

int main() {
    string context = "Hello Program";
    print(context);
    print("Hello World");
    return 0;

}

// consst & ho tro ca rvalue va lvalue