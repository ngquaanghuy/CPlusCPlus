#include <iostream>
using namespace std;

class Base {
    public:
        virtual void display() {
            cout << "Base display" << endl;
        }
};

class Derived : public Base {
    public:
        void display() override final {
            cout << "Derived display" << endl;
            cout << "Can't override" << endl;
        }
};
class Derived2 : public Derived {
    public:
        void display() {
            cout << "Derived2 display" << endl;
        }
};

int main() {
    Base *base = new Derived();
    base->display();
    return 0;
}

// Comment
/*
Khi dung final, no se ngan chan cac ham ke thua con tiep theo
*/