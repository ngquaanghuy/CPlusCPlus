#include <iostream>

using namespace std;

class Superclass {
    public:
        int add(int a, int b) {
            return a + b;
        }
};

class Subclass : private Superclass {
    public:
        auto cong(int b, int y) {
            return add(b, y);
        };
        auto tru(auto x, auto y) {
            return x - y;
        }
};

int main() {
    Subclass math;
    int result = math.cong(100, 200);
    int data = math.tru(9000, 8000);
    cout << "Cong: " << result << endl;
    cout << "Tru: " << data << endl;
    return 0;
}