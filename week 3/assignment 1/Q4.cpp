#include <iostream>

using namespace std;

int main() {
    double first_reading; 
    double second_reading;

    cout << "First reading (C): ";
    cin >> first_reading;
    cout << "Second reading (C): ";
    cin >> second_reading;

    if (!(-40 < first_reading && first_reading < 125) ||
        !(-40 < second_reading && second_reading < 125)) {
        cout << "One or more of the readings is unvalid. It is not possible to print a status" << endl;
        return 0;
    }

    if (first_reading > second_reading) {
        cout << "Higher reading: " << first_reading << " C" << endl;
    } else if (second_reading > first_reading) {
        cout << "Higher reading: " << second_reading << " C" << endl;
    } else {
        cout << "Both readings are the same" << endl;
    }

    double difference = (first_reading - second_reading);

    if (difference < 0) {
        difference *= -1;
    }

    cout << "Difference: " << difference << " C" << endl;

    if (difference >= 0 && difference <= 3) {
        cout << "Status: Close" << endl;
    } else if (difference >= 4 && difference <= 10) {
        cout << "Status: Review" << endl;
    } else {
        cout << "Status: Alarm" << endl;
    }
}