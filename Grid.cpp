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
        case 5 :
            break;
    }
    cout << "Position: (" << x << ",  " << y << ")" << endl;
}

int main() {
    int direct = 0, x = 0, y = 0;
    cout << "Position: (" << x << ",  " << y << ")" << endl;
    while (direct != 5) {
        direct = 0;
        cout << "1. North\n2. East\n3. South\n4. West\n5. Quit" << endl;
        while (direct != 1 && direct != 2 && direct != 3 && direct != 4 && direct != 5) {
            cin >> direct;
            if (direct != 1 && direct != 2 && direct != 3 && direct != 4 && direct != 5) {
                cout << "Invalid response. Try again." << endl;
            }
        }
        move(direct, x, y);
    }
    return 0;
}
