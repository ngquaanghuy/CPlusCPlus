#include <iostream>

using namespace std;

class Base {
    public:
        virtual void print(const string &message) {};
};

class Subclass : public Base {
    public:
        void print(const string &message) override {
            cout << message << endl;
        }
};

int main() {
    Subclass *sub = new Subclass();
    sub->print(string("Hello World"));
    return 0;
}