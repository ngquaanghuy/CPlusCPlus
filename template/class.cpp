#include <iostream>

using namespace std;

template<typename X, typename Y>

class Math {
    X A;
    Y B;
    public:
        Math(X a, Y b) : A(a), B(b) {};
        auto cong() {
            return A + B;
        }
        auto tru() {
            return A - B;
        }
};

int main() {
    Math math(20, 30);
    cout << "Sum: " << math.cong() << endl;
    return 0;
}