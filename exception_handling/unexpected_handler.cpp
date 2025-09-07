// only C++98

#include <iostream>
#include <exception>

using namespace std;

void Unexpected() {
    cerr << "Custom unexpected handler called!" << endl;
    terminate();
}
void func() throw(int) {
    throw 3.14
}

int main() {
    set_unexpected(Unexpected);
    try {
        func();
    } catch (...) {
        cerr << "Caught something" << endl;
    }
}