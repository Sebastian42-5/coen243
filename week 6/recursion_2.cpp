#include <iostream>
#include <array>

using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){

    const size_t n_array_size{5}; // initializing the array size 

    array<int, n_array_size> n;

    array<int, 5> numbers{5, 12, 34, 45, 56};

    int sum = 0;

    cout << factorial(4) << endl;

    for(size_t i = {0}; i < n.size(); ++i){  // here you initialize it to {0} because there no defined elements at this point yet for array n 
        n[i] = i;
    }

    for(size_t i = {0}; i < n.size(); ++i){
        cout << n[i];
    }

    for(int i = 0; i < numbers.size(); ++i){
        sum += numbers[i];
    }

    cout << sum << endl;
}