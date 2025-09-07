#include <iostream>
#include <vector.>

using namespace std;
void print(vector<int> vec);
class Vector {
    public:
    void print(vector<int> vec) {
        cout << "This is a integer: " << vec[0] << endl;
    }    
};

int main() {
    Vector obj;
    vector<int> vec = {10, 20, 30};
    obj.print(vector<int>{10});
    return 0;
}