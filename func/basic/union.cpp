#include <iostream>

using namespace std;

union Data {
    int a;
    float b;
    char *c;
};

int main() {
    Data data;
    data.a = 10;
    data.b = 3,25;
    data.c = "c";
    cout << data.a << endl;
    cout << data.b << endl;
    cout << data.c << endl;
    return 0;
}

// The effect of union is to allow many types of data variables to be stored in one memory area. This helps union save data when only needing to store data at one time.