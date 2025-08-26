#include <iostream>
using namespace std;

namespace System {
    class Print {
        public:
            void print(string &&message) {
                cout << message << endl;
            }
            void print(const string &message) {
                cout << message << endl;
            }
        Print() = default;
        Print(const Print&) = delete;
        Print& operator=(const Print&) = default;
    };
}

int main() {
    System::Print printer;
    printer.print("Hello C++");
    string text = "Hello C++ with lvalue";
    printer.print(text);
    return 0;
}