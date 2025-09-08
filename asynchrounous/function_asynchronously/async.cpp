#include <iostream>
#include <future>

using namespace std;

int calc() {
    return 42;
}

int StatusUpdateName() {
    return 43;
}
int StatusUpdateLevel() {
    return 44;
}
int StatusCreateAccount() {
    return 01;
}
int main() {
    future<int> result = async(launch::async, calc);
    cout << "Doing other work" << endl;
    cout << StatusUpdateLevel() << endl;
    cout << StatusUpdateName() << endl;
    cout << StatusCreateAccount() << endl;
    int value = result.get();
    cout << "Calc: " << value << endl;
    return 0;
}