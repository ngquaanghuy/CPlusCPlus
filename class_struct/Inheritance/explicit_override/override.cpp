#include <iostream>

using namespace std;

class Human {
    public:
        virtual void speak(const string &&message) = 0;
};

class Derived final : public Human{
    public:
        void speak(const string &&message) override {
            cout << message << endl;
        }
};

int main() {
    Human *base = new Derived();
    base->speak("Hello WOrld");
    delete base;
    return 0;
}