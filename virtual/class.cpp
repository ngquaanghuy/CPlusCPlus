#include <iostream>

using namespace std;

class Class {
    public:
        Class() {
            cout << "Constructor" << endl;
        }
        ~Class() {
            cout << "Destructor" << endl;
        }
};

int main() {
    Class oop;
    return 0;
}