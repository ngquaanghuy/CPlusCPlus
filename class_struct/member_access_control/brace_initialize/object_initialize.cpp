#include <iostream>
using namespace std;

class Obj {
    public:
        Obj(int a, int b) : x(a), y(b) {};
        void display() {
            cout << x << endl;
            cout << y << endl;
        }
    private:
        int x, y;
};

int main() {
    Obj obj{10, 20};
    obj.display();
    return 0;
}