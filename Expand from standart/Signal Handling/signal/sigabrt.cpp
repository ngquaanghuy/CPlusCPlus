#include <iostream>
#include <csignal>
#include <cstdlib>

using namespace std;

void signalHandler(int signum) {
    cout << "Signum: " << signum << endl;
    exit(signum);
}

int main() {
    signal(SIGABRT, signalHandler);
    cout << "Abort" << endl;
    abort();
}