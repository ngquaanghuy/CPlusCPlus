#include <iostream>

using namespace std;
namespace System {
    void print(string &&message) {
        cout << message << endl;
    }
    auto math_add(auto a, auto b) {
        return a = b;
    }
}
int main() {
    System::print("Hello C++");
    cout << System::math_add(1, 2) << endl;
    cout << System::math_add(1.5, 2.5) << endl;
    return 0;
}