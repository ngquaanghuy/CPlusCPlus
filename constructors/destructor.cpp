#include <iostream>
using namespace std;

class Class {
    private:
        int *data;
    public:
        Class(int size) {
            data = new int[size];
            cout << "Cap phat bo nho" << endl;

        }
        ~Class() {
            delete[] data;
            cout << "Giai phong bo nho" << endl;
        }
};

int main() {
    Class class1(10);
    return 0;
}