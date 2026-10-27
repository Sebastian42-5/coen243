#include <iostream>
#include <cmath> 

// power of two, if it is not a power of two, it continues prompting until it's a power of two 
// after, yo create a triangle pattern 
// between each number, you put a tab 
// user would always type a positive integer

using namespace std;

int main(){
    double number = 3;
    while((log2(number) / floor(log2(number))) > 1.0){
        cout << "Enter a number that is a power of 2: ";
        cin >> number;
    }

    cout << endl;
        
    for(int i = log2(number) + 1; i >= 1 ; i--){
        double value = number;
        for(int j = 0; j < i; j++){
            cout << value << "\t";
            value /= 2;
        }
        cout << endl;
        number /= 2;
    }
}