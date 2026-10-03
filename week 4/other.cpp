#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int findDistance(int, int);

void funny();

int multiplyArray(int (&my_array)[5], int amount);


int main() {

    // initialization, condition, increment
    for(int i = 0; i <= 10; i += 2){
        if(i == 4)
            continue; // skips printing 4^2
        cout << pow(i, 2) << endl;
        // calculates the power
    }

    cout << "hello" << setw(21) << "how are you doing" << endl;
    // setw sets the number of characters on this line

    funny();

    int my_array[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) {
        cout << my_array[i] << " ";
    }

    cout << endl;

    multiplyArray(my_array, 2);

    for(int i = 0; i < 5; i++) {
        cout << my_array[i] << " ";
    }

    cout << endl;

    return 0;
}

void funny() {
    int beta = 5;
    do
    {
        switch(beta)
        {
            case 1: cout << "R";
                    break;
            case 2:
            case 4: cout << "O";
                    break;
            case 5: cout << "L";
        }
        beta--;
    } while (beta > 1);
    cout << "X";

    for(int i = 2; i <= 4; i++) {
        for(int j = 6; j <= 7; j++) {
            cout << i << " " << j;
            cout << j;
        }
    }
    
}


int findDistance(int x1, int x2) {
    return abs(x1 - x2);
}


int multiplyArray(int (&my_array)[5], int amount) {
    for(int i = 0; i < 5; i++) {
        my_array[i] *= amount;
    }
    return 0;
}