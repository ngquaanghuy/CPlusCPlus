#include <iostream>

using namespace std;

class Superclass {
    public:
        virtual void print(const string &message) = 0;
};

class Subclass : public Superclass {
    public:
        void print(const string &message) override {
            cout << message << endl;
        }
};

int main() {
    Superclass *sub = new Subclass();
    sub->print(string("Hello World"));
    return 0;
}

// Comment
/*
Pure virtual function la ham thuan ao, neu muon ke thua, phai bat buoc su dung override de ghi de
file da gom ca pure virtual function va Abstract Class vao mot file
*/