#include <iostream>
#include <memory>

using namespace std;
int main() {
    unique_ptr<int> up = make_unique<int>(45);
    cout << "Address: " << &up << endl;
    cout << "Value: " << *up << endl;
    return 0;
}
