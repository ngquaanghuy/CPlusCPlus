#include <iostream>
#include <memory>
#include <utility>

using namespace std;

class Widget {
    public:
        Widget(int x) {
            cout << "Widget(int) " << x << endl;
        }

        Widget(int x, string& s) {
            cout << "Widget(int, string) " << x << ", " << s << endl;
        }
        Widget(int x, string&& s) {
            cout << "Widget(int x, string&& ) " << x << ", " << s << endl;
        }
};

template<typename... args> unique_ptr<Widget> make_widget(args&&... Args) {
    return make_unique<Widget>(forward<args>(Args)...);
}


int main() {
    auto x1 = make_widget(1);
    string s = "Hello World";

    auto x2 = make_widget(10, s);
    auto x3 = make_widget(20, string("Hello World"));
    return 0;
}