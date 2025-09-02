#include <iostream>

using namespace std;

void takeSome(string &&msg) {
    cout << msg << endl;
}

int main() {
    takeSome("Done task");
    return 0;
}