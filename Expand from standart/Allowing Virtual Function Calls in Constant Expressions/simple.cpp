#include <iostream>

using namespace std;

struct Base {
    virtual int f() const = 0;
};

struct Deli : Base {
    constexpr int f() const override {
        return 42;
    }
};

constexpr int call_virtual(const Base& b) {
    return b.f();
}

int main() {
    constexpr Deli d{};
    constexpr int val = call_virtual(d);
    cout << val << endl;
    return 0;
}