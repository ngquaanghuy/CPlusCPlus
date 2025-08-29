#include <iostream>

using namespace std;

class OOP {
    private:
        string name;
    public:
        OOP(string name) : name(name) {};
        void student() {
            cout << name << endl; 
        }
};

int main() {
    OOP opp("Hello OOP");
    OOP *oop = &opp;
    oop->student();
    return 0;
}