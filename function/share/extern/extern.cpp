#include <iostream>
#include "file1.cpp"
using namespace std;
extern int x;
int main() {
    cout << x << endl;
    return 0;
}

// This code demonstrates how to use an external variable defined in another file.
// With 'extern', it is used for the purpose of sharing variables in different places (mostly other files)