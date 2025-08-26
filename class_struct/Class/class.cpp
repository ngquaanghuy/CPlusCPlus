#include <iostream>

using namespace std;
class Dog {
    public:
     string name = "Bob";
     int hp = 10;
     string live = "Running";
     enum class Condition {
        attack = 1,
        defend = 1,
        domestication = 1
     };
     int access_data(Condition type) {
        if (type == Condition::attack) {
            return static_cast<int>(Condition::attack);
        } else if (type == Condition::defend) {
            return static_cast<int>(Condition::defend);
        } else if (type == Condition::domestication) {
            return static_cast<int>(Condition::domestication);
        } else {
            return 0;
        }
     }
};

int main() {
    Dog dog;
    Dog access;
    cout << "Name: " << dog.name << endl;
    cout << "HP: " << dog.hp << endl;
    cout << "Status: " << dog.live << endl;
    cout << "Condition attack: " << access.access_data(Dog::Condition::attack) << endl;
    cout << "Condition defend: " << access.access_data(Dog::Condition::defend) << endl;
    cout << "Condition domestication: " << access.access_data(Dog::Condition::domestication) << endl;
    return 0;

}