#include <iostream>
#include <iomanip>

using namespace std;

bool isValidCoin(int coin);

void calculateChange(int price, int amountInserted, int &change);

double calculateOverpayment(int price, int amount_inserted);


int main() {
    int price;
    static int amount_inserted = 0;
    static int number_of_valid_coins_inserted = 0;
    int change;
    double overpayment;

    cout << "Enter product price in cents: ";
    cin >> price;

    while(amount_inserted < price){
        int coin;
        cout << "Insert a coin: ";
        cin >> coin;

        if(isValidCoin(coin) == false){
            cout << "Invalid coin." << endl;
        } else {
            amount_inserted += coin;
            cout << "Amount inserted: " << amount_inserted << " cents" << endl;
            number_of_valid_coins_inserted++;
        }

    }

    cout << amount_inserted << endl;

    calculateChange(price, amount_inserted, change);
    overpayment = calculateOverpayment(price, amount_inserted);
    cout << overpayment << endl;

    cout << "------ Purchase Summary ------" << endl;
    cout << "Product price: " << price << " cents" << endl;
    cout << "Amount inserted: " << amount_inserted << " cents" << endl;
    cout << "Number of valid coins inserted: " << number_of_valid_coins_inserted << endl;
    cout << "Change: " << change << " cents" << endl;
    cout << "Overpayment: " << setprecision(2) << fixed << overpayment << "%" << endl;

}


bool isValidCoin(int coin){
    if(coin == 5 || coin == 10 || coin == 25 || coin == 100){
        return true;
    } else {
        return false;
    }
}


void calculateChange(int price, int amount_inserted, int &change){
    change = amount_inserted - price;
}


double calculateOverpayment(int price, int amount_inserted){
    double overpayment = ((amount_inserted - price) / price) * 100;
    return overpayment;
}

