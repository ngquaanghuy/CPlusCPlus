#include <iostream>

using namespace std;

template<typename... args> auto sum(args... ar) {
    return (ar + ...);
}

int main() {
    cout << sum(1, 2,3, 8,4,8 ,567,6) << endl;
    return 0;
}