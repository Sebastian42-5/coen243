#include <iostream>
#include <cmath>

using namespace std;

int x = 1;
void f() { x++; }
int getX() { return x; }

int compress(int n){
    int previous_digit = n % 10;

    int result;

    for(int i = 2; i <= n; i++){
        int power1 = pow(10, i);
        int power2 = pow(10, i - 1);
        int power3 = pow(10, i - 2);
        int current_digit = (n % power1) / power2;

        if(current_digit == previous_digit){
            result += (n / power2);
            int number_containing_duplicate = (n % power2) % power3;
            result *= power3;
            result += number_containing_duplicate;
        }
    }

    return result;
}

void printTriangle(int n){
    for(int i = 0;  i <= n - 1; i++){
        for(int j = i + 1; j <= n; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    // int x = 10;
    // f();
    // {
    //     int x = 20;
    //     f();
    //     x++;
    //     cout << x << " ";
    // }
    // cout << x << " " << getX();

    printTriangle(5);

    // cout << compress(324451) << endl;
}