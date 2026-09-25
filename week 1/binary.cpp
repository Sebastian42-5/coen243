#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    float number;
    int non_decimal_number;
    string binary = "";
    string binary_decimal = "";
    string decimal_part = "";
    cout << "Enter a number: ";
    cin >> number;

    string number_string = to_string(number);

    string::size_type decimal_dot_index = number_string.find('.');

    cout << "dot index: " << decimal_dot_index << endl;

    if(decimal_dot_index != string::npos) {
        decimal_part = "0." + number_string.substr(decimal_dot_index + 1);
    }

    if(!decimal_part.empty()){
        non_decimal_number = stoi(number_string.erase(decimal_dot_index, decimal_part.length() + 1));
    }
    number = stoi(number_string);

    float decimal_number = decimal_part.empty() ? 0 : round(stof(decimal_part) * 100) / 100;

    cout << decimal_number << endl;

    while(non_decimal_number > 0){
        if(non_decimal_number % 2 == 0){
            binary += "0";
        } else {
            binary += "1";
        }
        non_decimal_number /= 2;
    }

    if(decimal_number != 0){
        binary_decimal += ".";
        while(decimal_number != 0){
            decimal_number *= 2;
            if(decimal_number >= 1){
                binary_decimal += "1";
                decimal_number -= 1;
            } else {
                binary_decimal += "0";
            }
        }
    }

    reverse(binary.begin(), binary.end());
    cout << "The binary representation is: " << binary << binary_decimal << endl;
    return 0;
}