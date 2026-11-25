pointers and references 

dynamically modifying memory allocations

every array is actually a pointer

pointers should be initialized to nullptr -> points to nothing 

you use & to assign an address of a variable to a pointr

all the addresses on a computer are integers 


0011F = 15 * 16^0 + 1 * 16^1 + 2 * 16^2 + 0 * 16^3 + 0 * 16^4 

This is a hexadecimal value 


int x{5};
p = &x; address of x 
y = *p

5 is now assigned to y 

* returns the content of the memory location a pointer points to 

++*p -> ++(*p)

pointers store addresses associated with values 

* operator deferences or gets values associated with the address of the pointer

pass by reference with pointer arguments: you copy the pointer 

function is called with a pointer to the variable 

pointer arithmetic is apporpriate only for pointers that point to built-in array elements 

when you have a memory that was not allocated, you cannot reference it 

ptr = ptr + 2  the bracket operator [i] for arrays is basically this 


when you add to a pointer, you add the number of bytes which correcpond to the size of an integer 

ptr = 2000
p + 2 = 2008, because 2 * sizeof(1) = 8 

[i] <=> p + i * sizeof(int)

the pointer needs a type 

when declaring variables, static allocation of memory 

new and delete 

 



