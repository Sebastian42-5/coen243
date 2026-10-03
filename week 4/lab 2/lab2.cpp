
#include <iostream>

// n % 10 keeps the last digit
// n % 100 keeps last two digits
// n % 1000 last three

// n / 10 removes the last digit 
// n / 100 last two
// n / 1000 last three

using namespace std;

int main() {
    // Write C++ code here
    int n1;
    int n2;
    int n3;
    int n4;
    int n5;

    int magic_number;

    int option;

    int sum;

    cout << "Enter an option (1 or 2): " << endl;
    cin >> option;

    switch(option){
        case 1:
            cout << "Enter 3 2-digit numbers: " << endl;
            cin >> n1 >> n2 >> n3;

            sum = n1 + n2 + n3;

            if(sum % 5 == 0 ){
                if(sum % 3 == 0) {
                    cout << "Your magic number is ";
                    cout << n3 << n1 << endl;
                    
                } else {
                    cout << "Your magic number is ";
                    cout << n1 % 10;
                    cout << n2+n3 << endl;
                }
            
            } else if(sum % 5 != 0 && sum % 3 == 0){
                cout << "Your magic number is ";
                cout << n1 + n3;
                cout << n2 % 10 << endl;

            } else {
                cout << "Your magic number is ";
                cout << n2 << "7" << n1 << endl;

            } 
            
            break;
    
        case 2:
            cout << "Enter 2 2-digit integers" << endl;
            cin >> n4 >> n5;

            int multiplication = n4 * n5;

            cout << "The multiplication is ";
            cout << multiplication << " ";

            if(multiplication % 2 == 0){
                cout << "and is even" << endl;
            } else {
                cout << "and is odd" << endl;
            }
            
            break;
    }
    return 0;
}