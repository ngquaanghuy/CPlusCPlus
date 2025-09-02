#include <iostream>

using namespace std;

void printInt(int &&x) {
    cout << x << endl;
}

int main() {
    printInt(5000);
    return 0;
}