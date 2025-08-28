#include <iostream>

using namespace std;

class Base {
    public:
        virtual void display() {
            cout << "BAse display" << endl;
        }
};

class Derived : public Base {
    public:
        void display() override {
            cout << "Derived display" << endl;
        }
};

int main() {
    Base *derived = new Derived();
    derived->display();
    return 0;
}

// Comment 
/*
Khong nhat thiet ohai dung override, nhung nen dung vi no se nhac nho trinh bien dich kiem tra xem ham cha, va ham ke thua co dong nhat ten khong
*/