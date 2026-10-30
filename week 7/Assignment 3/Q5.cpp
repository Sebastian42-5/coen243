#include <iostream>
#include <array>

using namespace std;

const size_t rows{2};
const size_t cols{2};


bool isIdentity(array<array<int, cols>, rows> &arr);

int det(array<array<int, cols>, rows> &arr);

array<array<int, cols>, rows> addArrays(array<array<int, cols>, rows> &arr1, array<array<int, cols>, rows> &arr2);

bool isEqual(array<array<int, cols>, rows> &arr1, array<array<int, cols>, rows> &arr2);


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


    array<array<int, cols>, rows> matrix = {{
        {a, b}, 
        {c, d}
    }};

    for(size_t i{0}; i < matrix.size(); ++i){
        for(size_t j{0}; j < matrix[0].size(); ++j){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << isIdentity(matrix) << endl;
    cout << det(matrix) << endl;

    cout << "Enter another 2 x 2 matrix: ";
    cin >> e >> f >> g >> h;
    cout << endl;

    array<array<int, cols>, rows> matrix2 = {{
        {e, f},
        {g, h}
    }};

    array<array<int, cols>, rows> matrixSum = addArrays(matrix, matrix2);

    for(size_t i{0}; i < matrixSum.size(); ++i){
        for(size_t j{0}; j < matrixSum[0].size(); ++j){
            cout << matrixSum[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << isEqual(matrix, matrix2) << endl;

}


bool isIdentity(array<array<int, cols>, rows> &arr){
    int identity_check = 0;
    for(size_t i{0}; i < arr.size(); ++i){
        for(size_t j{0}; j < arr[0].size(); ++j){
            if((i == 0 && j == 0) || (i == 1 && j == 1) && arr[i][j] == 1){
                identity_check++;
            } else if((i == 0 && j == 1) || (i == 1 && j == 0) && arr[i][j] == 0){
                identity_check++;
            }
        }
    }
    if(identity_check == arr.size() + arr[0].size()){
        return true;
    } else {
        return false;
    }
}

int det(array<array<int, cols>, rows> &arr){
    int a = arr[0][0];
    int b = arr[0][1];
    int c = arr[1][0];
    int d = arr[1][1];

    return (a * d) - (b * c);
}

array<array<int, cols>, rows> addArrays(array<array<int, cols>, rows> &arr1, array<array<int, cols>, rows> &arr2){
    array<array<int, cols>, rows> sumArr = {{}};
    for(size_t i{0}; i < arr1.size(); ++i){
        for(size_t j{0}; j < arr1[0].size(); ++j){
            sumArr[i][j] = arr1[i][j];
            sumArr[i][j] += arr2[i][j];
        }
    }
    return sumArr;
}

bool isEqual(array<array<int, cols>, rows> &arr1, array<array<int, cols>, rows> &arr2){
    bool is_equal = false;
    for(size_t i{0}; i < arr1.size(); ++i){
        for(size_t j{0}; j < arr1[0].size(); ++j){
            if(arr1[i][j] == arr2[i][j]){
                is_equal = true;
            } else {
                is_equal = false;
            }
        }
    }
    return is_equal;
}

