#include <iostream>

using namespace std;

struct Info {
    string name;
    int age;
};

typedef struct Info Info_2;
Info info = {"Nguyen Quang Huy", 13};
Info_2 info_2 = {"Nguyen Quang Huy", 11};
int main() {
    cout << info.name << " " << info.age << endl;
    cout << info_2.name << " " << info_2.age << endl;
    return 0;
}

// With typedef it will define a new function, which has the same internals as the original, but it will be known by a different name.