#include <iostream>

using namespace std;

struct Info {
    string name;
    int age;
};

typedef struct Info Info_2;
Info info = {"Nguyen Quang Huy", 13};
Info_2 info_2 = {"Nguyen Van A", 11};
int main() {
    cout << info.name << " " << info.age << endl;
    cout << info_2.name << " " << info_2.age << endl;
    return 0;
}