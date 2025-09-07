#include <iostream>

using namespace std;

void except() noexcept {
    throw runtime_error("Phat sinh ngoai le");
}
int main() {
    try {
        except();
    } catch (const runtime_error& e) {
        cout << "Exception; "  << e.what() << endl;
    }
    cout << "Done" << endl;
    return 0;
}

// With noexcept, it will assert that your function does not have exceptions, if it generates an error it will stop the entire process.