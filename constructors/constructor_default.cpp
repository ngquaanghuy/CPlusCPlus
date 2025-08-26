#include <iostream>

using namespace std;

class NPC {
    public:
        struct Condition {
            bool attack;
            bool defend;
            bool domestication;

        };
        Condition condition;
        string name;
        int age;
        NPC() {
            name = "Villager";
            age = 18;
            condition.attack = true;
            condition.defend = true;
            condition.domestication = true;
        }
};

int main() {
    NPC npc;
    cout << "Name: " << npc.name << endl;
    cout << "Age: " << npc.age << endl;
    cout << "Attack: " << npc.condition.attack << endl;
    cout << "Defend: " << npc.condition.defend << endl;
    cout << "Domestication: " << npc.condition.domestication << endl;
    return 0;

}