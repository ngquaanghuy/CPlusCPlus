#include <iostream>
#include <string>
#include <utility>
using namespace std;

void func();
void func(int x, string& s);
void func(int x, string&& s);
template<typename... Args> void forward_func(Args&&... args) {
    func(forward<Args>(args)...);
}
void func(int x, string& s) {
    cout << "Forward(int, string) " << x << ", " << s << endl;
}
void func(int x, string&& s) {
    cout << "Forward(int, string&&) " << x << ", " << s << endl;
}

int main() {
    string c1 = "Hello World";
    forward_func(10, c1);
    forward_func(10, string("HEllo WOrld"));
    return 0;
}