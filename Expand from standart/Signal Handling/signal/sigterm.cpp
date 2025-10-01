#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void handler(int signum) {
    cout << "Signal: " << signum << endl;
    exit(signum);
}

int main() {
    signal(SIGTERM, handler);
    cout << "Running" << endl;
    while (true) {
        cout << "Run..." << endl;
        sleep(2);
    }
    return 0;
}