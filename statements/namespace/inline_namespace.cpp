#include <iostream>

using namespace std;
namespace Sys {
    inline namespace Print {
        void print(const string &&message);
    }
}

void Sys::Print::print(const string &&message) {
    cout << message << endl;
}

int main() {
    Sys::Print::print("Hello from inline namespace");
    return 0;
}