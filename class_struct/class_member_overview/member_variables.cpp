#include <iostream>
using namespace std;

class Member {
    private:
     int value;
    public:
     Member(int value) : value(value) {};
};
int main() {
    Member member(10);
    return 0;
}