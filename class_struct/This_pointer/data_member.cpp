#include <iostream>

using namespace std;

class Pointer {
    private:
        string name;
    public:
        Pointer(string nam) : name(nam) {};
        void print() {
            cout << name << endl;
        }
        void chanageName(string &&msg) {
            this->name = msg;
        }
};

int main() {
    Pointer ptr("David");
    ptr.print();
    ptr.chanageName("William");
    ptr.print();
    return 0;
}