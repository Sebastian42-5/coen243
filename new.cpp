#include <iostream>

using namespace std;

int main(){
    int a = 0, b = 5;
    if (a++ && b++) { }
    if (a++ || b++) { }
    cout << a << b;
}