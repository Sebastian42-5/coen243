#include <iostream> 
#include <iomanip>

using namespace std;

int main() {
    double monthly_water_consumption; 
    double total = 0;
    double conservation_credit = 0;

    cout << "Water consumption (m^3): ";
    cin >> monthly_water_consumption; 

    cout << "Consumption: " << fixed << setprecision(2) << monthly_water_consumption << " m^3" << endl;

    if(monthly_water_consumption < 0) {
        cout << "Negative values are not allowed!" << endl;
        return 0;
    } else {
        if(monthly_water_consumption <= 15){
            conservation_credit = 4.00;
            total += monthly_water_consumption * 0.80;
        } else {
            total += 15 * 0.80; 
        }
        monthly_water_consumption -= 15;
        if(monthly_water_consumption > 0 && monthly_water_consumption <= 25) {
                total += monthly_water_consumption * 1.25;
        } else if(monthly_water_consumption > 25) {
            total += 25 * 1.25;
        }
        monthly_water_consumption -= 25;
        if(monthly_water_consumption > 0) {
            total += monthly_water_consumption * 1.80;
        }
    }

    cout << "Usage charge: " << "$" << fixed << setprecision(2) << total << endl;
    cout << "Service charge: " << "$8.00" << endl;
    total += 8.00;
    cout << "Conservation credit: " << "$" << fixed << setprecision(2) << conservation_credit << endl;
    total -= conservation_credit;
    cout << "Final bill: " << "$" << fixed << setprecision(2) << total << endl;

    return 0;
}
