#include <iostream>

using namespace std;

class InjectionError : public runtime_error {
    public:
        explicit InjectionError(const string &&message) : runtime_error(message) {}
};

void ErrorName() {
    throw InjectionError("Invalid");
}


int main() {
    try {
        ErrorName();
    } catch (const exception &error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}