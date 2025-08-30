#include <iostream>

using namespace std;

class Admin {
    int value;
    public:
        Admin(int val = 0) : value(val) {};
        Admin &add(int num) {
            value += num;
            return *this;
        }
        Admin &sub(int num) {
            value -= num;
            return *this;
        }
        Admin &mul(int num) {
            value *= num;
            return *this;
        }
        void show() {
            cout << "Value: " << value << endl;
        }
};

int main() {
        Admin ad(500);
        ad.add(500).add(500).mul(3);
        ad.show();
        return 0;
}