#include <iostream>

using namespace std;

void runtime() {
    throw runtime_error("exception propagation");
}

void connect() {
    runtime();
}
void encrypto() {
    connect();
}
void decrypto() {
    encrypto();
}
void except() {
    try {
        decrypto();
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
}
int main() {
    except();
    return 0;
}