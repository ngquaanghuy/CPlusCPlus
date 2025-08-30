#include <iostream>

using namespace std;

struct PlayerStatus {
    bool isLive : 2;
    unsigned int level : 4;
    bool isAdmin : 2;
};

int main() {
    PlayerStatus ps;
    ps.isLive = true;
    ps.level = 5;
    ps.isAdmin = false;

    cout << "isLive: " << ps.isLive << endl;
    cout << "Level: " << ps.level << endl;
    cout << "isAdmin: " << ps.isAdmin << endl;
    
    return 0;
}