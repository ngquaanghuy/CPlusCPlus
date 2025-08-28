#include <iostream>

using namespace std;

class Superclass {
    public:
        void print(const string &&message);
};

class Subclass final : public Superclass {
    public:
        void print(const string &&message) {
            cout << message << endl;
        }
};

int main() {
    Subclass sub;
    sub.print("Hello WOrld");
    return 0;
}