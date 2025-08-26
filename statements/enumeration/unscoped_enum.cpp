#include <iostream>
using namespace std;
enum level {
    low, // low = 0
    medium, // medium = 1
    high, // high = 2
    // ... += 1
};

int main() {
    level mylevel = medium;
    if (mylevel == 1 ) {
        std::cout << "Medium level" << std::endl;
    }
    mylevel = high;
    if (mylevel == 2 ) {
        std::cout << "High level" << std::endl;
    }
    return 0;
}