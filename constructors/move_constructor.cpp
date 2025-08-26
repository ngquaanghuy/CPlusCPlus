#include <iostream>
#include <utility>

using namespace std;

class Move {
    private:
        int *data;
        int size;
    public:
        Move (const int size) { data = new int[size];}
        Move (Move&& other) noexcept : size(other.size), data(other.data) {
            other.data = nullptr;
        }
        ~Move() { delete[] data; }
};


// Don gian hoa

class Normal {
    int integer;
    public:
        Normal () : integer(0) {}
        int display(int x, int y) {
             return x + y;
        }
        void out() noexcept {
            cout << integer << endl;
        }
        void setInteger(int num) {
            integer = num;
        }
};
int main() {
    Move move1(10);
    Move move2 = move(move1);

    Normal move3;
    move3.setInteger(1000);
    move3.out();

    Normal move4 = move(move3);
    move4.out();
    return 0;
}