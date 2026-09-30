#include <iostream>

using namespace std; 

int main() {
    int i = 0;
    int j = 0;
    for(int i = 0; i <= 5; i++) {
        cout << "Hello World" << endl;
    }
    do {
        cout << "i" << i << endl;
        j = i++;
        cout << "j" << j << endl;
    } while(i < 6);

    while(i < 12) {
        cout << "i" << i << endl;
        j = i++;
        cout << "j" << j << endl;
    }

    return 0;
}

