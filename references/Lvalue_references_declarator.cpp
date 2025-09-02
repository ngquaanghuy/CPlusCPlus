#include <iostream>

using namespace std;

struct Person {
    int age;
    string name;
};
int main() {
    Person pl;
    Person& pr = pl;
    pr.age = 20;
    pr.name = "Huy";
    cout << pl.age << endl;
    cout << pl.name << endl;
    return 0;
}

