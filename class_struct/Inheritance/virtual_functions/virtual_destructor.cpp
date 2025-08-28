#include <iostream>

using namespace std;

class Dad {
    public: 
        virtual ~Dad() {
            cout << "Virtual Destructor" << endl;
        }
};

class Son : public Dad {
    public: 
        ~Son() {
            cout << "Son destructor" << endl;
        }
};

int main() {
    Son son ;
    return 0;
}