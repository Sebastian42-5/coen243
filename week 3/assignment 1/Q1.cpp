#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int rental_duration;
    double hourly_rate;
    double booking_fee_rate;

    cout << "Rental duration (minutes): " << endl;
    cin >> rental_duration; 
    cout << "Hourly rate ($): " << endl;
    cin >> hourly_rate;
    cout << "Booking fee rate (%): " << endl;
    cin >> booking_fee_rate;
    
    double rental_duration_in_hours = rental_duration / 60.0; 
    
    cout << rental_duration_in_hours << endl;

    double rental_cost = hourly_rate * rental_duration_in_hours; 

    cout << "Rental cost: " << "$" << fixed << setprecision(2) << rental_cost << endl;

    double booking_fee =  rental_cost * (booking_fee_rate / 100);

    cout << "Booking fee: " << "$" << fixed << setprecision(2) << booking_fee << endl;

    double total = rental_cost + booking_fee;

    cout << "Total: " << "$" << fixed << setprecision(2) << total << endl;
    return 0;
}