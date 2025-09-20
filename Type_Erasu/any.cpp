#include <any>
#include <iostream>
#include <string>

using namespace std;

int main() {
    any value = 100;
    value = string("Hello");
    value = 3.14;
    try {
        //auto str = any_cast<string>(value);
        auto d = any_cast<double>(value);
        //cout << str << endl;
        cout << d << endl;
    }
    catch (bad_any_cast const& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}