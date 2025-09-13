#include <iostream>

using namespace std;

class Widget {
    public:
        Widget() {
            cout << "Default constructor" << endl;
        }
        Widget(const Widget&) {
            cout << "Copy constructor" << endl;
        }
        Widget(Widget&&) {
            cout << "Move constructor" << endl;
        }
        ~Widget() {
            cout << "Destructor" << endl;
        }
};

Widget guaranteed_elision() {
    return Widget(); // Guaranteed - no copy/move
}

Widget w = Widget(); // Guaranteed - no copy/move

void exception_handling() {
    try {
        throw Widget();
    } catch (Widget w) { // copy elisions
        // ....
    }
}


Widget not_guaranteed() {
    Widget w;
    return w; // NRVO - compiler may optimize
}


int main() {
    guaranteed_elision();
    exception_handling();
    not_guaranteed();
    return 0;
}