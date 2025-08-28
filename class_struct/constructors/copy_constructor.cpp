#include <iostream>

using namespace std;

class NPC {
    public:
        NPC() {
            cout << "NPC" << endl;
        }
};

int main() {
    NPC player;
    NPC player2 = player;
    return 0;
}