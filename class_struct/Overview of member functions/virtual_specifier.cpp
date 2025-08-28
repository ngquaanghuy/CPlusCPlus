#include <iostream>

using namespace std;
class Base {
    public:
        virtual void show() {
            cout << "Base" << endl;
        }
        virtual void display() {
            cout << "Base display" << endl;
        }
        virtual ~Base() {
            cout << "Base destructor" << endl;
        }
};

class Derived : public Base {
    public:
        void show() {
            cout << "Derived" << endl;
        }
        void display() {
            cout << "Derived display" << endl;
        }
        ~Derived() {
            cout << "Derived destructor" << endl;
        }
};

class Override {
    public:
        virtual void show() {
            cout << "Base" << endl;
        }
        ~Override() {
            cout << "Override destructor" << endl;
        }
};

class DerivedOverride : public Override {
    public:
        void show() override {
            cout << "Overide" << endl;

        }

};
int main() {
    Base *base = new Derived();
    base->show();
    base->display();
    delete base;
    Derived derived;
    derived.display();

    Override *ride = new DerivedOverride();
    ride->show();
    delete ride;
    return 0;
}