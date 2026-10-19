#include <iostream>
#include <cmath>

using namespace std;


int isBalanced(int n){
    static int count = 0;

    int n_check_count = n;

    while(n_check_count >= 10){
        n_check_count /= 10;
        count++;
    }

    if(count < 2){
        return 0;
    } 


    int first_half = n / pow(10, (count / 2) + 1);
    int t = pow(10, (count / 2) + 1);
    int second_half = n % t;

    int first_sum = 0;
    int second_sum = 0;

    while(first_half >= 1 && second_half >= 1){
        int current_first_half_digit = first_half % 10;
        int current_second_half_digit = second_half % 10;

        first_sum += current_first_half_digit;
        second_sum += current_second_half_digit;

        first_half /= 10;
        second_half /= 10;
    }

    if(first_sum == second_sum){
        return 1;
    } else {
        return 0;
    }

}

int countBalanced(int a, int b){
    if(a > b){
        return 0;
    }
    return isBalanced(a) + countBalanced(a + 1, b);
}

void printBalancedReport(int a, int b){
    int range_length = 0;
    for(int i = a; i <= b; i++){
        range_length++;
    }
    cout << range_length << endl;
    if(a > b){
        cout << "Invalid range" << endl;
    } else if(countBalanced(a, b) == 0){
        cout << "None balanced" << endl;
    } else if(countBalanced(a, b) == range_length){
        cout << "All balanced" << endl;
    } else {
        cout << countBalanced(a, b) << " of " << range_length << " balanced " << endl;
    }
}



int main(){
    // for (int i = 4; i >= 1; i--) {
    // for (int j = i; j <= 4; j++) {
    //     cout << (i + j) % 4 << " ";
    // }
    // cout << endl;
    // }

    printBalancedReport(10, 30);  // 2 of 21 balanced
    printBalancedReport(11, 11);  // All balanced
    printBalancedReport(12, 19);  // None balanced
    printBalancedReport(30, 10);  // Invalid range
}
