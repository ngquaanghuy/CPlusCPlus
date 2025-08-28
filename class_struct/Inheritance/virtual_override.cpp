#include <iostream>

using namespace std;

class Virtual {
    public:
        virtual void display() {
            cout << "This is virtual" << endl;
        }
};

class Derived : public Virtual {
    public:
        void display() override {
            cout << "This is override" << endl;
        }
};

int main() {
    Derived* vir = new Derived();
    Virtual vir2;
    vir->display();
    vir2.display();
    return 0;
}