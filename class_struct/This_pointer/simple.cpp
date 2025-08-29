#include <iostream>

using namespace std;

class This {
    private:
        int value;
    public:
        This(int val) : value(val) {};
        void display() {
            cout << "Value: " << this->value << endl;
            cout << "Address: " << this << endl;
        }
};

int main() {
    This dis(5000);
    dis.display();
    return 0;
}