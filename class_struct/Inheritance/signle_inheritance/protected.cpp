#include <iostream>

using namespace std;

class Super {
    public:
        auto cong(auto x, auto y) {
            return x + y;
        }
};

class Sub : protected Super {
    public:
        auto tru(auto x, auto y) {
            return x - y;
        }
        auto add(auto x, auto y) {
            return cong(x, y);
        }
};

int main() {
    Sub math;
    int result = math.add(700, 400);
    int data = math.tru(10000, 100);
    cout << "Cong: " << result << endl;
    cout << "Tru: " << data << endl;
    return 0;
}