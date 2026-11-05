#include <algorithm>
#include <iostream>
#include <array>
#include <vector>

using namespace std;

int main(){
    const size_t arraySize{4};
    array<int, arraySize> my_array = {4, 2, 67, 1};

    sort(my_array.begin(), my_array.end());

    for(size_t i{0}; i < arraySize; ++i){
        cout << my_array[i] << " ";
    }
    cout << endl;

    int index = binary_search(my_array.begin(), my_array.end(), 67);

    cout << index << endl;

    vector<int> a = {1, 2, 3, 4};
    vector<int> b = {1, 2, 3, 4};

    if(a == b){
        cout << "equal" << endl;
    }

}
