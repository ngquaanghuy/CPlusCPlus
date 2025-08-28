#include <iostream>

using namespace std;

class Super {
    public:
        auto add(auto a, auto b) {
            return a + b;
        }
};

class Sub : public Super {
    public:
        auto print(auto a) {
            cout << a << endl;
        }
};

int main() {
    Sub math;
    int result = math.add(300, 400);
    math.print(result);
    return 0;
}