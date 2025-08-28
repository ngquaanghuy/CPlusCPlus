#include <iostream>

using namespace std;

class A {
    public:
    void displayA() {
        cout << "A" << endl;
    }
};

class B : public A {
    public:
    void displayB() {
        cout << "B" << endl;
    }
};

class C : public B {
    public:
    void displayC() {
        cout << "C" << endl;
    }
};

int main() {
    C obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    return 0;

}