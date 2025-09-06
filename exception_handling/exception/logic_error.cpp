#include <iostream>
#include <typeinfo>
using namespace std;

auto Data(auto abc) {
    string type = typeid(abc).name();
    if (type == "i") {
        return abc;
    } else if (type == "d") {
        return abc;
    } else {
        throw logic_error("Error syntax");
    }
}

int main() {
    try {
        cout << Data(999) << endl;
        cout << Data(double(9.999)) << endl;
        cout << Data(float(9.9)) << endl;
        cout << Data(string("Hello World")) << endl;
    }
    catch (const logic_error& error) {
        cout << "Caught Exception: " << error.what() << endl;
    }
}