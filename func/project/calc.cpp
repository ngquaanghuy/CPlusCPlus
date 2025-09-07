#include <iostream>
using namespace std;
auto cong(int a, int b) {
    return a + b;
}
auto tru(int a, int b) {
    return a - b;
}
auto nhan(int a, int b) {
    return a * b;
}
auto chia(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero!" << std::endl;
        return 0; // or handle the error as appropriate
    }
}
void table() {
    cout << "-------------------------" << endl;
    cout << "| 1. Cong (Addition)    |" << endl;
    cout << "| 2. Tru (Subtraction)  |" << endl;
    cout << "| 3. Nhan (Multiplication)|" << endl;
    cout << "| 4. Chia (Division)    |" << endl;
    cout << "-------------------------" << endl;
}
int main() {
    table();
    int choice;
    cout << "Nhap lua chon (1-4): ";
    cin >> choice;
    int a, b;
    cout << "Nhap hai so: ";
    cin >> a >> b;
    switch (choice) {
        case 1:
            cout << "Ket qua: " << cong(a, b) << endl;
            break;
        case 2:
            cout << "Ket qua: " << tru(a, b) << endl;
            break;
        case 3:
            cout << "Ket qua: " << nhan(a, b) << endl;
            break;
        case 4:
            cout << "Ket qua: " << chia(a, b) << endl;
            break;
        default:
            cout << "Lua chon khong hop le!" << endl;
            break;
    }
    return 0;
}