#include <iostream>

using namespace std;

void convertTime(int totalSeconds, int& hours, int& minutes, int& seconds);

int toSeconds(int hours, int minutes, int seconds);

int main(){
    int totalSeconds;
    int hours;
    int minutes;
    int seconds;

    while(totalSeconds < 0){
        cout << "Enter a number of seconds to be converted to hours, minutes, seconds: ";
        cin >> totalSeconds;
    }

    convertTime(totalSeconds, hours, minutes, seconds);

    cout << hours << " hours " << minutes << " minutes " << seconds << " seconds " << endl;

    int reconstructedSeconds = toSeconds(hours, minutes, seconds);

    cout << reconstructedSeconds << " seconds";


}


void convertTime(int totalSeconds, int& hours, int& minutes, int& seconds){
    hours = totalSeconds / 3600;
    int hourRemainder = totalSeconds % 3600;
    minutes = hourRemainder / 60;
    seconds = hourRemainder % 60;
}


int toSeconds(int hours, int minutes, int seconds){
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    return totalSeconds;
}