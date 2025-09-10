#include <iostream>
#include <future>

using namespace std;

int main() {
    auto asynchrounous = async(launch::async, []() {
        cout << "Hello WOrld" << endl;
        return 1;
    });
    asynchrounous.get();
    return 0;
}