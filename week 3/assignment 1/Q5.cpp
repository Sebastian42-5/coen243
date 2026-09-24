#include <iostream> 

using namespace std;

int main() {
    double monthly_water_consumption; 
    double total = 0;

    cout << "Water consumption (m^3)" << endl;
    cin >> monthly_water_consumption; 

    if(monthly_water_consumption < 0) {
        cout << "Negative values are not allowed!" << endl;
    } else {
        if(monthly_water_consumption <= 15){
            total -= 4.00; // this is the 
            total += monthly_water_consumption * 0.80;
        } else {
            total += 15 * 0.80; 
        }
        monthly_water_consumption -= 15;
        if(monthly_water_consumption <= 25) {
                total += monthly_water_consumption * 1.25;
        } else {
            total += 25 * 1.2;
        }
        monthly_water_consumption -= 25;
    }
    return 0;
}
