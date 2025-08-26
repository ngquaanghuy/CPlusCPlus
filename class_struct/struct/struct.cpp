#include <iostream>

using namespace std;
struct Cat {
    string name;
    int age;
    int hp;
    string live;
    struct Condition {
        bool attack;
        bool defend;
        bool domestication;
    };
    struct Owner {
        string name;
        int age;
        string live;
        int phone;
    };

    Owner owner;
    Condition condition;
};

int main() {
    Cat cat;
    cat.name = "Tran Duc BO";
    cat.age = 3;
    cat.hp = 100;
    cat.live = "Running";
    cat.condition.attack = true;
    cat.condition.defend = true;
    cat.condition.domestication = true;
    cat.owner.name = "Meow MEow";
    cat.owner.age = 30;
    cat.owner.live = "Running";
    cat.owner.phone = 123456789;
    
    cout << "Name: " << cat.name << endl;
    cout << "Age: " << cat.age << endl;
    cout << "HP: " << cat.hp << endl;
    cout << "Status: " << cat.live << endl;
    cout << "Condition attack: " << cat.condition.attack << endl;
    cout << "Condition defend: " << cat.condition.defend << endl;
    cout << "Condition domestication: " << cat.condition.domestication << endl;
    cout << "Owner name: " << cat.owner.name << endl;
    cout << "Owner age: " << cat.owner.age << endl;
    cout << "Owner live: " << cat.owner.live << endl;
    cout << "Owner phone: " << cat.owner.phone << endl;
    return 0;
    
}