#include <iostream>

using namespace std;

void print() {
    cout << "\n";
}

template<typename First, typename... Args>
void print(First one, Args... one) {
    cout << one << endl;
    print(one...);
}


int main() {
    print(1, 1.5, "hello");
    return 0;
}