#include <iostream>
#include <exception>

using namespace std;

void Terminate() {
    cerr << "Custom terminate handler called!" << endl;
    abort();
}

void func() noexcept {
    throw runtime_error("Runtime error");
}

int main() {
    set_terminate(Terminate);
    cout << "Noexcept" << endl;
    func();
    return 0;
}