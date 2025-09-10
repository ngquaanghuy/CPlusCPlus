#include <iostream>
#include <future>

using namespace std;


int complete() {
    return 444;
}

int main() {
    future<int> result = async(complete);

    cout << "Result: " << result.get() << endl;
    return 0;
}