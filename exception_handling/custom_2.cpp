#include <iostream>

using namespace std;

class ERR_MESS : public runtime_error {
    public:
        explicit ERR_MESS(const string &&message);
};

inline ERR_MESS::ERR_MESS(const string &&message) : runtime_error(message) {}

int main() {
    try {
        throw ERR_MESS("Skibidi error");
    } catch (const exception& error) {
        cout << "Caught Exception: " << error.what() << endl;
    }
    return 0;
}