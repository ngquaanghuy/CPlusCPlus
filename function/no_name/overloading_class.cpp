#include <iostream>

using namespace std;
void print(int a);
void print(string b);
class Over {
    public:
    void print(int a) {
        cout << "This is an integer: " << a << endl;
    }
    void print(string b) {
        cout << "This is message: " << b << endl;
    }
};

int main() {
    Over obj;
    obj.print(10);
    obj.print("Hello, World!");
    return 0;
}