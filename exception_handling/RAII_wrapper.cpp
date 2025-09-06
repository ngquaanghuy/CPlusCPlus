#include <iostream>

using namespace std;

class Resources {
    private:
        int pri;
    public:
        // Constructor: thu nhan tai nguyen
        Resources(int abc) : pri(abc) {
            if (pri < 10) {
                throw underflow_error("Small");
            }
            cout << "Resource acquired" << endl;
        }

        // Destructor: giai phong tai nguyen
        ~Resources() {
            cout << "Resource released" << endl;
        }
};

void use() {
    Resources rw(88);
    if (1 < 2) {
        throw runtime_error("exit");
    }
}

int main() {
    try {
        use();
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}