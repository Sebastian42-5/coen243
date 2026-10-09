#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n; // base case
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int recursiveSum1(int n) {
    int sum = n;
    if(n == 1){
        return n;
    }
    return sum += recursiveSum1(n - 1);
}

int recursiveSum2(int n) {
    if(n == 1) {
        return 1;
    }
    return recursiveSum2(n-1) + n;
}


int gcd(int x, int y) {
    if(y == 0) {
        return x;
    }
    return gcd(y, x%y);
}


int main() {
    cout << recursiveSum1(5) << endl;
    cout << recursiveSum2(5) << endl;
    cout << gcd(21, 15) << endl;
    return 0;
}


// function stack