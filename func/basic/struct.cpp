#include <iostream>

using namespace std;

struct Info {
    string name;
    int age;
};

int main() {
    Info info = {"Nguyen Quang Huy", 13};
    cout << info.name << " " << info.age << endl;
    return 0;
}