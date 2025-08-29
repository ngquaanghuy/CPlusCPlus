#include <iostream>

using namespace std;

namespace Scope {
    int x = 0;
}

int main() {
    cout << Scope::x << endl;
    return 0;
}