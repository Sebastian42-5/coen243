#include <iostream>
#include <array>

using namespace std;

bool isIdentity(array<int, 4> arr);

int det(array<int, 4> arr);

array<int, 4> addArrays(array<int, 4> arr1, array<int, 4> arr2);

bool isEqual(array<int, 4> arr1, array<int, 4> arr2);


int main(){
    int a;
    int b;
    int c;
    int d;

    int e;
    int f;
    int g;
    int h;

    cout << "Enter the elements of the 2 x 2 matrix: ";
    cin >> a >> b >> c >> d;
    cout << endl;


    array<int, 4> matrix = {a, b, c, d};

    for(size_t i{0}; i < matrix.size(); ++i){
        cout << matrix[i] << " ";
    }
    cout << endl;

    cout << isIdentity(matrix) << endl;
    cout << det(matrix) << endl;

    cout << "Enter another 2 x 2 matrix: ";
    cin >> e >> f >> g >> h;
    cout << endl;

    array<int, 4> matrix2 = {e, f, g, h};

    array<int, 4> matrixSum = addArrays(matrix, matrix2);

    for(size_t i{0}; i < matrixSum.size(); ++i){
        cout << matrixSum[i] << " ";
    }
    cout << endl;

    cout << isEqual(matrix, matrix2) << endl;

}


bool isIdentity(array<int, 4> arr){
    int identity_check = 0;
    for(size_t i{0}; i < arr.size(); ++i){
        if((i == 0 || i == 2) && arr[i] == 1){
            identity_check++;
        } else if((i == 1 || i == 3) && arr[i] == 0){
            identity_check++;
        }
    }
    if(identity_check == arr.size()){
        return true;
    } else {
        return false;
    }
}

int det(array<int, 4> arr){
    int a = arr[0];
    int b = arr[1];
    int c = arr[2];
    int d = arr[3];

    return (a * d) - (b * c);
}

array<int, 4> addArrays(array<int, 4> arr1, array<int, 4> arr2){
    array<int, 4> sumArr = {};
    for(size_t i{0}; i < arr1.size(); ++i){
            sumArr[i] = arr1[i];
            sumArr[i] += arr2[i];
    }
    return sumArr;
}

bool isEqual(array<int, 4> arr1, array<int, 4> arr2){
    bool is_equal = false;
    for(size_t i{0}; i < arr1.size(); ++i){
        for(size_t j{0}; j < arr2.size(); ++j){
            if(arr1[i] == arr2[j]){
                is_equal = true;
            } else {
                is_equal = false;
            }
        }
    }
    return is_equal;
}

