#include <iostream>
#include <vector>

using namespace std;

class Data {
    vector<int> arr;
    public:
        Data(int n) : arr(n, 1) {};
        Data(Data&& other) noexcept : arr(move(other.arr)) {
            cout << "Move semantic" << endl;
        }
};

int main() {
    Data a = Data(500);
    Data b = move(a);
    return 0;
}