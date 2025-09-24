#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(nullptr));
    for (int i = 0; i < 100;i++) {
        cout << rand() % 100 << " ";
    }
    return 0;
}