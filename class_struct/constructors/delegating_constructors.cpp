#include <iostream>
using namespace std;

class Delegating {
    public:
        Delegating(int x) {
            cout << x << endl;
        }
        Delegating(int x, int y) : Delegating(x) {
            cout << x + y << endl;
        }

};

int main() {
    Delegating del(10);
    Delegating del2(10, 20);
    return 0;
}