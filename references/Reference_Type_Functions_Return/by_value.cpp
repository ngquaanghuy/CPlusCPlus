#include <iostream>

using namespace std;
int global = 5000;
int &ref() {
    return global;
}

int main() {
    ref() = 500;
    cout << global << endl;
    return 0;
}