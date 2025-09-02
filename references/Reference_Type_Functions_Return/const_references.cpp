#include <iostream>

using namespace std;

int global = 500;

const int& read() {
    return global;
}

int main() {
    cout << read() << endl;
    return 0;
}