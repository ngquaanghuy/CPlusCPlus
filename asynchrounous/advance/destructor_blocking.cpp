#include <iostream>
#include <future>

using namespace std;

int main() {
    {
        auto f3 = async(launch::async, []() {
            cout << "Launch" << endl;
            return 1;
        });
    }
    return 0;
}