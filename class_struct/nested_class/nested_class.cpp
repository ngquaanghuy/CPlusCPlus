#include <iostream>

using namespace std;

class Super {
    public:
        class Inner{
            public:
                void display() {
                    cout << "Display" << endl;
                }
        };
        void useInner() {
            Inner in;
            in.display();
        }
};

int main() {
    Super::Inner sup;
    sup.display();
    
    return 0;
    
}