#include <iostream>
#include <typeinfo>

using namespace std;

int main() {
    int abc = 999;
    cout << typeid(abc).name() << endl;
    return 0;
}