#include <iostream>
#include <memory>

using namespace std;

class Mem {
    public:
        Mem() {
            cout << "Constructor" << endl;
        }
        ~Mem() {
            cout << "Destructor" << endl;
        }
        void console() {
            cout << "Console text" << endl;
        }
};

int main() {
    shared_ptr<Mem> sp1 = make_shared<Mem>();
    {
        shared_ptr<Mem> sp2 = sp1;
        sp1->console();
    } // Destructor
    sp1->console();
    return 0;
}