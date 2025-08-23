#include <iostream>

using namespace std;

struct Default {
    Default() = default;
    Default(const Default&) = delete;
    Default operator=(const Default&) = delete;
    Default operator+(const Default&) = delete;
    public:
      void print(string &&message) {
        cout << message << endl;
      }
      int add(int a, int b) {
        return a + b;
      }
};

int main() {
    Default obj;
    obj.print("THis is a expicitly defaulted constructor");
    cout << obj.add(3, 5) << endl;
    return 0;
}