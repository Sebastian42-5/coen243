#include <iostream>
#include <array>

using namespace std;

// Write a c++ program that will allocate an array of integers 
// The index is the mirror index of the array 
// You make an array of 10 integers as an input
// it displays the list 
// The user will be perfect and will always add 10 valid integers 
// we have to implement a function called int get_summation(int[], int)

int get_summation(array<int, 10> arr, int index);

int main(){
    const size_t size{10};
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

    cout << "Please enter 10 integers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;

    array<int, size> arr = {n1, n2, n3, n4, n5, n6, n7, n8, n9, n10};

    cout << "You entered the following list of integers:" << endl;

    for(size_t i{0}; i < arr.size(); ++i){
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Result after processing array is: ";

    for(size_t i{0}; i < arr.size() / 2; ++i){
        int summation = get_summation(arr, i);
        cout << summation << " ";
    };

}

int get_summation(array<int, 10> arr, int index){
    int first_num = arr[index];
    int last_num = arr[arr.size() - index - 1];
    int sum = first_num + last_num;
    return sum;
}


