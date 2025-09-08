#include <iostream>
#include <new>

using namespace std;

class Superclass {
    private:
        int a, b;
    public:
        Superclass(int super, int sub) : a(super), b(sub) {
            cout << "Constructor" << endl;
        }
        ~Superclass() {
            cout << "Destructor" << endl;
        }
        void print(const string &&msg) const {
            cout << msg << endl;
        }
};


int main() {
    alignas(Superclass) unsigned char buffer[sizeof(Superclass)];
    Superclass* super = new (buffer) Superclass(1, 2);
    super->print("ALooo");
    super->~Superclass();
    return 0;
}