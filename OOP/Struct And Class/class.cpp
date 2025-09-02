#include <iostream>

using namespace std;

class Inherttance {
    public:
        void display() {
            cout << "Defualt" << endl;
        }
};

class Derived : public Inherttance {
    public:
        void inhertance() {
            cout << "Inhertance" << endl;
        }
};

int main() {
    Derived obj;
    obj.display();
    obj.inhertance();
    return 0;
}