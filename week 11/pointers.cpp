#include <iostream>

void addingByPointerReference(int*, int*);

int main(){
    int x{5};
    int* p{nullptr}; // this declares a pointer to an integer and initializes it to nullptr
    p = &x;
    std::cout << sizeof(*p) << std::endl;
    std::cout << p << std::endl;

    int z{10};

    int *zp = &z;

    

    *zp = 2 * *p;

    std::cout << z << std::endl;

    // *p returns the value of x and p returns the pointer to the address of x

    int num1{1};
    int num2{2};

    addingByPointerReference(&num1, &num2);

    // an integer is four bytes 

    std::cout << num1 << " " << sizeof(num1) << std::endl;


    int b[] = {1, 2, 3, 4, 5}; // this is a C style array 

    int *p2 = &b[0];

    int arraySize = sizeof(b) / sizeof(b[0]);



}

// int* p and int *p are the same 

void addingByPointerReference(int* xPtr, int* yPtr){
    *xPtr += *yPtr;
}

// Jumping from index to index, you add +4 to the hexadecimal address associated with the value of the array

// when you create an array, all the values of he array are stored in an address in the cpu 

