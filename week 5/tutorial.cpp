#include <iostream>
#include <string>

using namespace std;


int add(int a, int b) { // parameters 
    return a + b;
}

int changeValue(int &num) { // reference parameter
    num += 10;
    return num;
}

int decimalToBinary(int n) {
    int remainder;
    int binary;
    int index = 1;

    while(n != 0) {
        remainder = n % 2;
        n /= 2;
        binary += remainder * index;
        index *= 10; // to get the number from right to left
    }
    return binary;
}

int integerPower(int base, int power) {
    int result = 1;
    for(int i = 0; i < power; i++) {
        result *= base;
    }

    return result;
}

int main() {
    string name = "Seb";
    int x = 5; 
    int y = 10;

    changeValue(x); // passing by reference
    changeValue(x);

    int result = add(x, y); // arguments
    cout << "The sum of " << x << " and " << y << " is: " << result << std::endl;
    cout << "Hello, " << name << "!" << std::endl;

    cout << integerPower(3, 4) << endl;

    return 0;
}