#include <iostream>

using namespace std;

int main() {
    int x = 10, y = 2;
    auto sun = [=, &x]() {
        return x + y;
    };

    auto add = [&]() {
        return x + y;
    };

    cout << "Sum: " << sun() << endl;
    cout << "Add: " << add() << endl;


    x = 500;
    cout << "Sum2: " << sun() << endl;
    cout << "Add2: " << add() << endl;
    return 0;
}

// trong do

/*
= se copy toan bo value, khi tai goi no du ban co thay doi gia tri cua bien, thi no van se su dung cac bien cxu da duoc copy (bat tat ca bien ben ngoai)
& bat tat ca theo tham chieu
*/