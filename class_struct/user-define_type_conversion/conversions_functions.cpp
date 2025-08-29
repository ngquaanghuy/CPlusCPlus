#include <iostream>

using namespace std;

class Define {
    private:
        int number;
        string message;
    public:
        Define(int num) : number(num) {};
        Define(string const &&mess) : message(mess) {};
        operator int() const {
            return number;
        }
        operator string() const {
            return message;
        }
};

int main() {
    Define user(500);
    int result = user;
    Define str("Abc");
    string data = str;
    cout << result << endl;
    cout << static_cast<string>(str) << endl;
    return 0;
}