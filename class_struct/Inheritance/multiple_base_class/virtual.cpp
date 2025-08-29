#include <iostream>

using namespace std;

class One {
    public:
        void A() {
            cout << "This is A" << endl;
        }
};

class Two : virtual public One {
    public:
        void B() {
            cout << "This is B" << endl;
        }
};

class Three : virtual public Two {
    public:
        void C() {
            A();
            B();
            cout << "This is C" << endl;
        }
};

int main() {
    Three three;
    three.C();
    return 0;
}