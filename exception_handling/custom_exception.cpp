#include <iostream>

using namespace std;

class Error : public runtime_error {
    public:
        explicit Error(const string &&message)
            : runtime_error(message) {}
};

int main() {
    try {
        throw Error("Error");
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}