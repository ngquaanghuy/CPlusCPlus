#include <iostream>
#include "file2.cpp"

using namespace std;

int main() {
    cout << add(100, 300) << endl;
    return 0;
}

// With inline, it suggests to the compiler that it should inline the function directly and where it is called. This reduces overhead, and increases performance with small functions, and should only be used for short functions.