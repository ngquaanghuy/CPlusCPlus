#include <iostream>

using namespace std;

class Data {
    public:
        int value;
        int data;
};

int main() {
    int Data::* dat = &Data::data;
    int Data::* val = &Data::value;

    Data data;
    data.value = 900;
    data.data = 1000;

    // Truy cap bien thanh vien qua con tro
    cout << "Data: " << data.*dat << endl;
    cout << "Value: " << data.*val << endl;

    // Truy cap con tro qua object
    Data *da = &data;
    cout << "Data: " << da->*dat << endl;
    cout << "Value: " << da->*val << endl;
    return 0;
}