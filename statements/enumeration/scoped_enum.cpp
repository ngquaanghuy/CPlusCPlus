#include <iostream>

using namespace std;

enum class Level {
    low,
    medium,
    high,
    superhigh,
    ultrahigh,
    // ... += 1
};

int main() {
    Level mylevel = Level::ultrahigh;
    if (mylevel == Level::ultrahigh) {
        cout << "Ultrahigh level" << endl;
    }
    return 0;
}