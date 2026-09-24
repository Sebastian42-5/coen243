#include <iostream> 
#include <string>

using namespace std;

enum Color {
    RED,
    GREEN,
    BLUE
};

Color carray[] = {Color::RED, Color::GREEN, Color::BLUE};
int color_index = 2;

int main() {
    switch(carray[color_index]) {
        case 0:
            cout << "The color is red." << endl;
            break;
        case 1:
            cout << "The color is green." << endl;
            break;
        case 2:
            cout << "The color is blue." << endl;
            break;
        default:
            cout << "Unknown color." << endl;
    }
}

