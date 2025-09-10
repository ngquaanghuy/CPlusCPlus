#include <iostream>
#include <future>

using namespace std;

int main() {
    async(launch::async, []() {
        cout << "Hello WOrld" << endl;
    });
    return 0;
}