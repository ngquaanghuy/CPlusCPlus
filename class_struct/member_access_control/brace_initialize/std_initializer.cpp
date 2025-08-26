#include <iostream>
#include <initializer_list>
using namespace std;

class Init {
    public:
        Init(initializer_list<int> list) {
            for (auto val : list) {
                cout << val << endl;
            }
        }
};

int main() {
    Init init{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    return 0;
}