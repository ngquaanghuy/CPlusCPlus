#include <iostream>

using namespace std;

bool dataType(bool a){
    if (a == true ) {
        cout << "True" << endl;
        return true;
    } else {
        cout << "False" << endl;
        return false;
    }
}

int main() {
    cout << dataType(true) << endl;
    cout << dataType(false) << endl;
    return 0;
}