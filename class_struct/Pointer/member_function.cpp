#include <iostream>

using namespace std;

class Base {
    public:
        void print() {
            cout << "hELLO owLRD" << endl;
        }
        int add(int x, int y) {
            return x + y;
        }
};

int main() {
    void (Base::*pHello)() = &Base::print;
    int (Base::*pAdd)(int, int) = &Base::add;

    Base base;
    (base.*pHello)();
    cout << "Add: " << (base.*pAdd)(10, 20) << endl;
    return 0;
}