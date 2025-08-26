#include <iostream>

using namespace std;

enum class Empty{};

int main() {
    Empty emp;
    cout << sizeof(emp) << endl;
    int convert = static_cast<int>(emp);
    cout << convert << endl;
    return 0;
}