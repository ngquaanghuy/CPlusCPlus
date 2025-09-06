#include <iostream>

using namespace std;

class MessageError : public runtime_error {
    public:
        explicit MessageError(const string &&error) : runtime_error(error) {}
};
void For(int num) {
    for (int i = 0; ; i++) {
        if (i > num) throw MessageError("Done");
        cout << i << endl;
    }
}

int main() {
    try {
        For(6);
    } catch (const exception& error) {
        cout << "Message: " << error.what() << endl;
    }
    return 0;
}