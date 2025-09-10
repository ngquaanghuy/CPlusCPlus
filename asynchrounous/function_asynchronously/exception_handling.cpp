#include <iostream>
#include <future>

using namespace std;

auto fuck = async(launch::async, []() {
    throw runtime_error("Runtime error");
    return 42;
});


int main() {
    try {
        int result = fuck.get();
    } catch (const exception& error) {
        cout << "Caught exception: " << error.what() << endl;
    }
    return 0;
}