#include <iostream>

using namespace std;

int x = 1;
void f() { x++; }
int getX() { return x; }

int main() {
    int x = 10;
    f();
    {
        int x = 20;
        f();
        x++;
        cout << x << " ";
    }
    cout << x << " " << getX();
}