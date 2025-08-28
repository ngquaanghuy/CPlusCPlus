#include <iostream>

using namespace std;

class Player {
    string name;
    int level;
    int hp;
    public:
        Player() {
            name = "Player 1";
            level = 1;
            hp = 100;
            cout << "Create player!" << endl;
        }
};

int main() {
    Player player;
    return 0;
}