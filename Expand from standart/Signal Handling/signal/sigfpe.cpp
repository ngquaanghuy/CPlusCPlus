#include <iostream>
#include <csignal>

using namespace std;

void signalHandler(int signum) {
    cout << "Signum: " << signum << endl;
    exit(signum);
}

int main() {
    signal(SIGFPE, signalHandler);
    cout << "Running" << endl;
    int sigss = 1 / 0;
    return 0;
}