#include <iostream>

using namespace std;

int x = 0;

int main(){
    int x = 5;
    cout << x << endl;
    cout << ::x << endl;
    return 0;
}