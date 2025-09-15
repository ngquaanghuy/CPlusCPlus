#include <iostream>
#include <cstdint>

using namespace std;

class Space {
    struct Voxel {
        bool isSolid;
        uint8_t r,g,b; // color
    };


    Voxel*** grid;
    int width, height, depth;

    public:
        Space(int w, int h, int d) : width(w), height(h), depth(d) {
            grid = new Voxel**[width];
            for (int i = 0; i < width; i++) {
                grid[i] = new Voxel*[height];
                for (int j = 0; j < height; j++) {
                    grid[i][j] = new Voxel[depth];
                    for (int k = 0; k < depth;k++) {
                        grid[i][j][k] = {false, 0,0,0};
                    }
                }
            }
        }
        void setVoxel(int x, int y, int z, bool solid, uint8_t r, uint8_t g, uint8_t b) {
             if (x >= 0 && x < width && y >= 0 && y < height && z >= 0 && z < depth) {
                grid[x][y][z] = {solid, r, g, b};
             }
        }

        void create(int centerX, int centerY, int centerZ, int radius) { {
            for (int i = 0; i < width; i++) {
                for (int j = 0; j < height; j++) {
                    for (int k = 0; k < depth; k++) {
                        int dx = centerX;
                        int dy = centerY;
                        int dz = centerZ;

                        if (dx*dx + dy*dy + dz*dz <= radius*radius) {
                            setVoxel(i, j, k, true, 255, 0, 0); // red sphere
                        }
                    }
                }
            }
        }

        }
};