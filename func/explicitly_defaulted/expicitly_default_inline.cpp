#include <iostream>

using namespace std;
struct Base {
    Base() = default;
    inline Base& operator=(const Base&) = default;
    public:
       void print(string &&message) {
        cout << message << endl;
       }
};