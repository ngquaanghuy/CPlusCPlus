#include <iostream>

using namespace std;

template<typename... Args>
void print(Args... args) {
    cout << "Number of arguments: " << sizeof...(args) << endl;
}

int main() {
    print("string", 1, 1.5, 'c');
    return 0;
}