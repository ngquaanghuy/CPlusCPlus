#include <iostream>
#include <typeinfo>

using namespace std;
class TypeError : public runtime_error {
    public:
        TypeError(const string &&message) : runtime_error(message) {}
};

template<typename T>
auto func(T a) {
    const string type = typeid(a).name();
    if (type != "i") {
        throw TypeError("TypeError");
    }
    for (int i = 0; i < a; i++) {
        cout << i << endl;
    }
    return 0;
}

int main() {
    try {
        func(1.1);
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}