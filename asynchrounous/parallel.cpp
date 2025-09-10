#include <iostream>
#include <future>

using namespace std;

int nhan(int a, int b) {
    return a * b;
}

int main() {
    auto f1 = async(launch::async, nhan, 4, 6);
    auto f2 = async(launch::async, nhan, 6, 8);
    auto f3 = async(launch::async, nhan, 8, 10);
    auto f4 = async(launch::async, nhan, 12, 14);

    cout << "Sum: " << f1.get() + f2.get() + f3.get() + f4.get() << endl;
    return 0;
}