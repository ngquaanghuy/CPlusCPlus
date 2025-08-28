#include <iostream>

using namespace std;

class Base {
    public:
        virtual void abc() {
            cout << "BAse" << endl;
        }
};

class Bass : public Base {
    public:
        void abc() {
            cout << "Bass" << endl;
        }
};

int main() {
    Base *bass = new Bass();
    bass->abc();
    return 0;
}