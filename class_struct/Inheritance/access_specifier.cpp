#include <iostream>

using namespace std;

class Access {
    public:
        int a;
    protected:
        int b;
    private:
        int c;
};

class Inhert : public Access {
    public:
        void protect() {
            a = 500;
            cout << a << endl;
            cout << "This is protect method" << endl;
        }
        void publicc() {
            b = 600;
            cout << b << endl;
            cout << "This is public method" << endl;
        }
        /*
        void privatee() {
            try {
                c = 1000;
            } catch (int e) {
                cout << "This is private method" << endl;
            }
        }
            */
};

int main() {
    Inhert derived;
    derived.protect();
    derived.publicc();
    return 0;
}