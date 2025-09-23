#include <iostream>

extern "C" {
    void c_function();
}
using namespace std;
int main() {
    cout << "From C++" << endl;
    c_function();
    return 0;

}