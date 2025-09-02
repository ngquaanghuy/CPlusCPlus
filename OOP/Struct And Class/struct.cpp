#include <iostream>

using namespace std;

struct Animal {
    private:
        int skibidi;
    public:
        string name;
        int age;
        int custom = skibidi;
};

int main() {
    Animal dog;
    dog.name = "MEOW MEOW MEOW";
    dog.age = 2;
    dog.custom = 500;
    return 0;
}