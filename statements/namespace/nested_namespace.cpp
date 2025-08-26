#include <iostream>

using namespace std;
namespace Sys{
    namespace Inner {
        void hello() {
            cout << "Hello from Inner namespace!" << endl;
        }
    }
    namespace Math {
        int add(int a, int b);
    }
}
namespace Sys::Math {
    int add (int a, int b) {
        return a + b;
    }
}

int main() {
    Sys::Inner::hello();
    cout << "Sum: " << Sys::Math::add(3, 4) << endl;
    return 0;
}