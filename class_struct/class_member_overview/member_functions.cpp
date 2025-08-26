#include <iostream>
using namespace std;

class Func {
    private:
        int var;
    public:
        Func(int var) : var(var) {};
        void display() {
            cout << var << endl;
        }
};

int main() {
    Func func(300);
    func.display();
    return 0;
}