#include <iostream>
#include <array>
#include <string>


using namespace std;

int main(){
    const size_t my_number_size{5};

    array<int, my_number_size> my_numbers = {1, 2, 3, 4, 5};

    int multiplication = 1;

    int sum = 0;

    string name = "sebastian";


    for(size_t i{0}; i < my_numbers.size(); ++i){
        multiplication *= my_numbers[i];
    }

    for(int number : my_numbers){
        sum += number;
    }

    cout << multiplication << endl;
    cout << sum << endl;
    cout << name[0] << endl;

    string store;

    cin >> store;

    cout << name << " went to the " << store;

    char string1[5];

    cin >> string1;
}
