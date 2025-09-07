#include <iostream>

using namespace std;

char text(char *text_char) {
    cout << "Character is:" << text_char << endl;
    return 0;
}

int main() {
    cout << text("v") << endl;
    return 0;
}