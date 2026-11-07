#include <iostream>
#include <array>

using namespace std;

double computeAverage(int n);

int countDigitsRecursive(int n);


int main(){
    int n;
    cout << "Please enter a positive integer: ";
    cin >> n;
    cout << "Average of number from 1 to " << n << " is: " << computeAverage(n) << endl;
    cout << "Number of digits is: " << countDigitsRecursive(n) << endl;
}

double computeAverage(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    double average = static_cast<double>(sum) / static_cast<double>(n);

    return average;
}

int countDigitsRecursive(int n){
    static int count = 0;
    if(n == 0){
        return count;
    }
    count++;
    n /= 10;
    return countDigitsRecursive(n);
}