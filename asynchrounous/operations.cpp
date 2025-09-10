#include <iostream>
#include <future>

using namespace std;

future<string> getName(const int uid) {
    return async(launch::async, [uid]() {
        const string name_one = "BOSS";
        const string name_two = "PLAYER";
        const string name_three = "NPC";

        if (uid == 1) {
            return name_one;
        } else if (uid == 2) {
            return name_two;
        } else if (uid == 3) {
            return name_three;
        } else {
            throw runtime_error("Invalid UID");
        }
    });
}
int bytes(const string typenamee) {
    if (typenamee == "int") {
        return sizeof(int);
    } else if (typenamee == "double") {
        return sizeof(double);
    } else if (typenamee == "float") {
        return sizeof(float);
    } else if (typenamee == "unsigned long long") {
        return sizeof(unsigned long long);
    } else {
        throw runtime_error("Invalid");
    }
}
int main() {
    auto fuck = getName(1);
    cout << bytes("int") << " bytes" << endl;
    cout << bytes("unsigned long long") << "bytes" << endl;
    cout << fuck.get() << endl;

    try {
        bytes("ABC");
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}