#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int year; 
    cout << "Enter a year: ";
    cin >> year;

    string year_string = to_string(year);

    string last_two_digits = year_string.substr(2, 2);

    if(year % 4 == 0){
        if(!(last_two_digits == "00" && year % 400 == 0)){
        cout << "The year" << year << "is not a leap year";
        } else {
            cout << "The year" << year << "is a leap year";
        }
    } else {
        cout << "The year" << year << "is not a leap year";
    }

    
}