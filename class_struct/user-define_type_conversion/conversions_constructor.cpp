#include <iostream>

using namespace std;
class Frace {
    private:
        int des;
        string constr;
    public:
        Frace(int num) : des(num), constr("UAr") {
            cout << "France" << endl;
        }

        void print() {
            cout << des << "/" << constr << endl;
        }
};

int main() {
    Frace fr(500);
    fr.print();
    return 0;
}