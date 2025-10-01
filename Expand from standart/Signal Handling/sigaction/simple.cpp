#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void signalHandler(int signum) {
    cout << "Signal: " << signum << endl;
    exit(signum);
}

int main() {
    struct sigaction action{};
    action.sa_handler = signalHandler;
    sigemptyset(&action.sa_mask);

    sigaction(SIGINT, &action, nullptr);

    while (true) {
        cout << "Running" << endl;
        sleep(1);
    }
    return 0;
}