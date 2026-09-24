#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double value; 
    double converted_value;
    int conversion_choice; 

    cout << "Enter the value: ";
    cin >> value;

    cout << "1. Centimeters to inches" << endl;
    cout << "2. Kilograms to pounds" << endl;
    cout << "3. Celsius to Kelvin" << endl;
    cout << "4. Square metres to square feet" << endl;

    cout << "Enter your choice: ";
    cin >> conversion_choice;

    if(conversion_choice < 1 || conversion_choice > 4) {
        cout << "Invalid conversion choice" << endl;
    } else {
        switch(conversion_choice) {
            case 1:
                converted_value = value * 0.393701;
                cout << value << " centimeters = " << fixed << setprecision(2) << converted_value << " inches" << endl;
                break;
            case 2:
                converted_value = value * 2.20462;
                cout << value << " kilograms = " << fixed << setprecision(2) << converted_value << " pounds" << endl;
                break;
            case 3: 
                converted_value = value + 273.15;
                cout << value << " celsius = " << fixed << setprecision(2) << converted_value << " fahrenheit" << endl;
                break;
            case 4:
                converted_value = value * 10.7639;
                cout << value << " square meters = " << fixed << setprecision(2) << converted_value << " square feet" << endl;
                break;
        }

    }
}