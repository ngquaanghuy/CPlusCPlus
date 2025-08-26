#include <iostream>

using namespace std;

class Player {
    string name;
    int level;
    int hp;
    public:
        Player(string name, int level, int hp) {
            this->name = name;
            this->level = level;
            this->hp = hp;
        
        }
};

int main() {
    Player player("SSkibi", 8, 199);
    return 0;
}