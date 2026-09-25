#include <iostream> 
#include <iomanip>

using namespace std;

int main() {
    int age;
    int weekend_flag;
    int is_a_member_flag;

    double ticket_price;
    double weekend_charge;
    double discount; 

    cout << "Age: ";
    cin >> age;

    if(age < 0) {
        cout << "Enter a valid age" << endl;
    } else if(age >= 0 && age <= 5) {
        ticket_price = 0;
    } else if(age >= 6 && age <=17) {
        ticket_price = 12;
    } else if(age >= 18 && age <= 64) {
        ticket_price = 20;
    } else if(age > 65) {
        ticket_price = 14;
    }

    cout << "Weekend? (0=no, 1=yes): ";
    cin >> weekend_flag;

    if(weekend_flag != 0 && weekend_flag != 1) {
        cout << "Enter a valid answer for the weekend question" << endl;
        return 0;
    }

    if(weekend_flag == 1) {
        weekend_charge = 3;
    } else {
        weekend_charge = 0;
    }

    cout << "Member? (0=no, 1=yes): ";
    cin >> is_a_member_flag;

    if(is_a_member_flag != 0 && is_a_member_flag != 1) {
        cout << "Enter a valid answer for the member question" << endl;
        return 0;
    }

    ticket_price += weekend_charge;

    if(is_a_member_flag == 1) {
        discount = ticket_price * 0.20;
    } else {
        discount = 0;
    }

    ticket_price -= weekend_charge; 

    cout << "Base price: " << "$" << fixed << setprecision(2) << ticket_price << endl;
    cout << "Weekend charge: " << "$" << fixed << setprecision(2) << weekend_charge << endl;
    cout << "Member discount: " << "$" << fixed << setprecision(2) << discount << endl;

    ticket_price += weekend_charge; // weekend fee 
    ticket_price -= discount;

    cout << "Final price: " << "$" << fixed << setprecision(2) << ticket_price << endl;
}