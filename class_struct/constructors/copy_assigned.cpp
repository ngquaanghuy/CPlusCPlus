#include <iostream>

using namespace std;

class Copy {
    public:
        Copy& operator=(const Copy& other) {
            if (this != &other) {}
            return *this;
        }
};

int main() {
    Copy copy;
    Copy copy2 = copy;
    return 0;
}