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


Widget create_widget() {
    return Widget();
}

Widget create_widget_named() {
    Widget w;
    return w;
}

int main() {
    Widget w1 = create_widget(); // RVO;
    Widget w2 = create_widget_named(); // NRVO
    return 0;
}