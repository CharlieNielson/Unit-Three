#include <iostream>
using namespace std;

void move(int direction, int &x, int &y) {
    switch(direction) {
        case 1:
            y += 1;
            break;
        case 2:
            x += 1;
            break;
        case 3:
            y -= 1;
            break;
        case 4:
            x -= 1;
            break;
        case 5:
            break;
    }
    cout << "Position: (" << x << ",  " << y << ")" << endl;
}

enum direct {NORTH, EAST, SOUTH, WEST, QUIT};

struct pos {
    int x;
    int y;
};


int main() {
    int direct = 0;
    pos things = {0, 0};
    cout << "Position: (" << things.x << ",  " << things.y << ")" << endl;
    while (direct != 5) {
        direct = 0;
        cout << "1. North\n2. East\n3. South\n4. West\n5. Quit" << endl;
        while (direct != 1 && direct != 2 && direct != 3 && direct != 4 && direct != 5) {
            cin >> direct;
            if (direct != 1 && direct != 2 && direct != 3 && direct != 4 && direct != 5) {
                cout << "Invalid response. Try again." << endl;
            }
        }
        move(direct, things.x, things.y);
    }
    return 0;
}
