#include <iostream>
#include <vector>
#include <array>
#include <unordered_map>
#include <string>

using namespace std;

int main(){
    vector<vector<int>> my_matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int my_element = my_matrix[1][1];

    cout << my_element << endl;

    int sum = 0;

    for(int i = 0; i < my_matrix.size(); ++i){
        for(int j = 0; j < my_matrix[0].size(); ++j){
            sum += my_matrix[i][j];
        }
    }

    cout << sum << endl;

    array<int, 5> my_array = {2, 4, 6, 8, 9};

    for(int& item : my_array){
        item*= 2;
    }

    for(size_t i{0}; i < my_array.size(); ++i){
        cout << my_array[i] << " ";
    }
    
    cout << endl;


    const size_t rows{2};
    const size_t cols{2};

    array<array<int, cols>, rows> b;

    // this is how you initialize



    unordered_map<string, int> class_grades = {
        {"Hairo", 100},
        {"Alexis", 90}
    };


}

// n has to be initialize const size_t n;

// sizeof("hello") is 6 