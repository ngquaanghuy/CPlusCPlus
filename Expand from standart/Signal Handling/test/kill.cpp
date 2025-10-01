#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum) {
    if (signum == 2) {
        exit(signum);
    }
    cout << "Signum: " << signum << endl;
    if (signum == 15) {
        cout << "Faild" << endl;
    }
}

int main() {
    cout << "Running" << endl;
    signal(SIGTERM, signalHandler);
    signal(SIGINT, signalHandler);
    while (true) {
        cout << "Handler" << endl;
        sleep(2);
    }
    return 0;
}