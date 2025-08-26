#include <iostream>

using namespace std;

struct Pointer {
    int x;
    int y;
};

int main() {
    Pointer p{1, 2};
    cout << p.x << endl;
    cout << p.y << endl;
    return 0;
}