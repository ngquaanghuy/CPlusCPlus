#include <iostream>

using namespace std;

class Life {
    private:
        int x;
    public:
        void birth() {
            cout << 'Object lifetime' << endl;
        }
};
void usingLife() {
    Life life; // Constructor mac dinh duoc goi
    life.birth(); // goi ham birth
} // Destructor duoc goi khi ra khoi pham vi

int main() {
    usingLife();
    return 0;
}