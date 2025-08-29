#include <iostream>

using namespace std;

class Superclass {
    public:
        void show() {
            cout << "uper class" << endl;
        }
};

class Subclass : public Superclass {
    public:
        void display() {
            cout << "Sub class" << endl;
            __super::show();
        }
};

int main() {
    Subclass sub;
    sub.display();
    return 0;
}