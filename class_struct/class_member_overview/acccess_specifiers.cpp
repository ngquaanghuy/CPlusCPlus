#include <iostream>
using namespace std;

class Access_Specifiers {
    private:
        int value;
    public:
        Access_Specifiers(int value) : value(value) {};
        void display() {
            cout << value << endl;
        }
    protected:
        int protected_value;
};

class Derived : public Access_Specifiers {
    public:
    Derived(int value) : Access_Specifiers(value) {};
        void protect(int val) {
            protected_value = val;
            cout << protected_value << endl;
        }
};

int main() {
    Derived abc(50);
    abc.protect(100);
    return 0;
}