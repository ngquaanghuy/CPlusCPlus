#include <iostream>
using namespace std;
class RAII {
    private:
        int *data;
    public:
        // CONSTRUCTOR : ACQUIRE (Chiem dung tai nguyen)
        RAII(const int size) { data = new int[size]; }
        // DESTRUCTOR : RELEASE ( Giai phonng tai nguyen )
        ~RAII() { delete[] data;}
        void display() {
            cout << data << endl;
        }
};

void usingRAII() {
    RAII raii(100000); // CONSTRUCTOR ( CHIEM DUNG TAI NGUYEN )
    raii.display(); // GHI TAI NGUYEN
} // DESTRUCTOR ( GIAI PHONG TAI NGUYEN )


int main() {
    usingRAII();
    return 0;
}