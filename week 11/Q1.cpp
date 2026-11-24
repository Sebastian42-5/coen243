#include <vector> 
#include <iostream>

int main(){
    int size;
    int sum = 0;

    std::cout << "Enter your desired matrix size: ";
    std::cin >> size;

    std::vector<std::vector<int>> matrix(size, std::vector<int>(size));

    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            std::cin >> matrix[i][j];
        }
    }

    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            if(i == j){
                sum += matrix[i][j];
            } else if ((j == matrix.size() - 1 - i)){
                sum += matrix[i][j];
            }
        }
    }

    std::cout << "The sum of two diagonals of the array is ";

    std::cout << sum << " = ";

    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            if(i == j){ 
                std::cout << matrix[i][j] << "+";
            }
        }
    }
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            if(i == (size - 1) / 2 && j == (size - 1) / 2){
                continue;
            } else if(i == size - 1  && j == 0){
                std::cout << matrix[i][j] << ".";
            } else if(j == size - 1 - i) {
                std::cout << matrix[i][j] << "+";
            }
        }
    }
}