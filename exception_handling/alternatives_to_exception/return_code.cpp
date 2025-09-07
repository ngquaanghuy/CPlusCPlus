#include <iostream>

using namespace std;

enum ErrorCode {
    SUCCESS, ERROR
};

ErrorCode loading() {
    if (5 < 4) return ERROR;
    return SUCCESS;
}

int main() {
    if (loading() == SUCCESS) {
        cout << "Loading done" << endl;
    } else {
        cout << "Loading fail" << endl;
    }
    return 0;
}