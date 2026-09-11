#include <iostream>

using namespace std;

class Tile {

public:
    int size;
    int color;
    int position;

    // this is the constructor for the Tile class

    Tile(int s, int c, int p) {
        size = s;
        color = c;
        position = p;
    }

    int getSize() {
        return size;
    }

};

int main() {
    Tile myTile(5, 10, 15);
    int tileSize = myTile.getSize();
    cout << "Tile size: " << tileSize << endl;
    return 0;
}
