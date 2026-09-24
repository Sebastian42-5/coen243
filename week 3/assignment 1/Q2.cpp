#include <iostream>

using namespace std;

int main() {
    int amount_in_cents;

    cout << "Amount in cents: ";
    cin >> amount_in_cents;

    int dollars = amount_in_cents / 100;
    int dollar_remainder = amount_in_cents % 100;

    int quarters = dollar_remainder / 25;
    int quarter_remainder = dollar_remainder % 25;

    int dimes = quarter_remainder / 10;
    int dime_remainder = quarter_remainder % 10;

    int nickels = dime_remainder / 5;
    int nickel_remainder = quarter_remainder % 5;

    int pennies = nickel_remainder;

    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0;
}