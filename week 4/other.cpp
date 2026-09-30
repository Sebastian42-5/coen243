#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


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

    return 0;
}

