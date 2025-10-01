#include <iostream>
#include <csignal>

using namespace std;

void signalHandler(int signum) {
    cout << "Signum: " << signum << endl;
    exit(signum);
}

int main() {
    signal(SIGSEGV, signalHandler);

    cout << "Segmentation" << endl;
    int* p = nullptr;
    *p = 42;
    return 0;
}