#include <iostream>

using namespace std;

class Main {
    private:
        int x = 0;
    public:
        friend void display(auto var);
};

void display(auto var) {
    auto data = var;
    cout << data << endl;
}

int main() {
    Main main;
    display(5);
    return 0;
}