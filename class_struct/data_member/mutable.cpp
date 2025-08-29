#include <iostream>

using namespace std;

class Admin {
    private:
        mutable int counter = 0;
        mutable string message;
    public:
        Admin(string msg) : message(msg) {};
        void print() const {
            counter++;
            cout << "Message: " << message << endl;
            cout << "Counter: " << counter << endl;
        }
        void setMsg(string &&msgg) {
            message = msgg;
        }
};

int main() {
    Admin log("Hello World");
    log.print();
    log.setMsg("Hello C++");
    log.print();
    return 0;
}