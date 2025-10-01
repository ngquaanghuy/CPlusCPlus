#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum) {
    cout << "Interrupt signal ( " << signum << ")" << endl;
    exit(signum);
}

int main() {
    signal(SIGINT, signalHandler);
    cout << "Running" << endl;
    while (true) {
        cout << "Run..." << endl;
        sleep(1);
    }
    return 0;
}