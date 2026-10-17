#include <iostream>

using namespace std;

int x = 10;

int f() {
return x--;
}

int fun(int n)
{
    if (n <= 2)
        return n;
    return fun(n - 1) + fun(n - 3);
}

int isAlternating(int n){
    bool alternating = false;
    int previous_digit = n % 10;
    int current_digit;
    static int count = 0;
    while(current_digit >= 1){
        current_digit = n % 10;
        if(count = 0){
            continue;
        } else if(current_digit % 2 == 0 && previous_digit % 2 != 0){
            alternating = true;
        } else if(current_digit % 2 != 0 && previous_digit % 2 == 0){
            alternating = true;
        } else {
            alternating = false;
        }
        n /= 10;
        previous_digit = current_digit;
    }
    return alternating;
}

void printAlternatingInfo(int n){
    int last_digit = n % 10;
    if(isAlternating(n) == 1 && last_digit % 2 == 0){
        cout << "Alternating and even-ending" << endl;
    } else if(isAlternating(n) == 1 && last_digit % 2 != 0){
        cout << "Alternating and odd-ending" << endl;
    } else {
        cout << "Not alternating" << endl;
    }
}


int main() {
    x = f();
    cout << x << " ";
    cout << f() << endl;

    cout << fun(6) << endl;

    cout << 5467 % 10 << endl;

    cout << isAlternating(1212) << endl;

    printAlternatingInfo(1212);
}


