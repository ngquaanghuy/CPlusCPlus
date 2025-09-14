#include <iostream>

using namespace std;

class Dynamic {
    int ***data;
    int x_v,y_v,z_v;

    public:
        Dynamic(int x, int y, int z) : x_v(x), y_v(y), z_v(z) {
            data = new int**[x_v];
            for (int i = 0; i < x_v; i++) {
                data[i] = new int*[y_v];
                for (int j = 0; j < y_v; j++) {
                    data[i][j] = new int[z_v];
                    for (int k = 0; k < z_v; k++) {
                        data[i][j][k] = 0;
                    }
                }
            }
            // [0][0][0] gia tri cua ba truc xyz
        } // Constructor

        ~Dynamic() {
            for (int i = 0; i < x_v; i++) {
                for (int j = 0;j < y_v;j++) {
                    delete[] data[i][j]; // delete y
                }
                delete[] data[i]; // delete x
            }
            delete[] data; // delete 3d
        }
        int& operator()(int x, int y, int z) {
            return data[x][y][z];
        }
};

int main() {
    Dynamic arr(10, 20, 30);
    cout << arr(5, 10, 15) << endl;
}