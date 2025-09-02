#include <iostream>
using namespace std;

int global = 50;

int& Define() {
    return global;
}

int main() {
    Define() = 500;
    cout << global << endl;
    return 0;
}