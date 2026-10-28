#include <iostream>

using namespace std;

// the base case of the countDigit recursive function is when the number becomes 0, because when there is an integer division by a number less than 10 by 10, the number becomes 0 and 
// that means it counted all the digits in the number. Each recursive call reduces the problem, because the length of the number becomes smaller and smaller from right to left, 
// and it is counting the digits that appear on the number on on its rightmost side.

int countDigit(int number, int digit);

int main(){
    int number;
    int digit;

    cout << "Enter a nonnegative number: ";
    cin >> number;

    while(number < 0){
        cout << "Enter a nonnegative number: ";
        cin >> number;
    }

    cout << "Enter a digit to count in the number";
    cin >> digit;

    while(digit < 0 || digit > 9){
        cout << "Enter a digit to count in the number";
        cin >> digit;
    }

    cout << countDigit(number, digit)  << " " << digit << "'s" << " were found" << endl;

}

int countDigit(int number, int digit){
    static int count = 0;
    int current_digit = number % 10;
    if(number < 1){
        return count;
    }
    if(current_digit == digit){
        count++;
    }
    number /= 10;
    cout << number << endl;
    return countDigit(number , digit);
}