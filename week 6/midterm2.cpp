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

    int first_half = n / pow(10, count / 2);
    int t = pow(10, count / 2);
    int second_half = n % t;

    int first_sum;
    int second_sum;

    for(int i = count / 2; i >= 1; i--){
        first_sum = 0;
        int digit = first_half / pow(10, i);
        first_sum += digit;
    }

    for(int i = count / 2; i >= 1; i--){
        second_sum = 0;
        int digit = second_half / pow(10, i);
        second_sum += digit;
    }

    if(first_sum == second_sum){
        return 1;
    } else {
        return 0;
    }

}

int main(){
    for (int i = 4; i >= 1; i--) {
    for (int j = i; j <= 4; j++) {
        cout << (i + j) % 4 << " ";
    }
    cout << endl;
    }

    cout << isBalanced(2231) << endl;
}
