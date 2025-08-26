#include <iostream>
using namespace std;

class Member {
    public:
        void normalFunc() {
            cout << "Normal" << endl;
        }
        static void staticFunc() {
            cout << "Static" << endl;
        }
        void constFunc() const {
            cout << "Const" << endl;
        }
}