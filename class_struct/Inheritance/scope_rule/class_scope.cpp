#include <iostream>

using namespace std;

class Scope {
    private:
        int x = 0;
    public:
        void show() {
            cout << x << endl;
        }
};


int main() {
    Scope scope;
    scope.show();
    return 0;
}