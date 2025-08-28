#include <iostream>

using namespace std;
class Inhert {
    public:
        int a;
};

class B : virtual public Inhert {
    public:
        int b;
};

class C : virtual public Inhert {
    public:
        int c;
};

class D : public B, public C {
    public:
        int d;
};

int main() {
    D obj;
    obj.a = 10; 
    obj.b = 20;
    obj.c = 30;
    obj.d = 40;
    cout << obj.a << endl;
    cout << obj.b << endl;
    cout << obj.c << endl;
    cout << obj.d << endl;
    return 0;
}