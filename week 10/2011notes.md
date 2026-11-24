How to compile a program with multiple objects and .cpp files

g++ -c main.cpp -o main.o
g++ -c Class.cpp -o Class.o

g++ main.o Class.o my_program

./my_program

If you have f1.cpp, f2.cpp, f3.cpp, it becomes f1.0, f2.0, f3.0 and we link it into one program 

g++ f1.o f2.o f3.o -o executable_name (.exe)

mingw32-make 

you have to add all the dependency files to the .h file, to reflect the changes made to the methods added from the .h file object 

Just add all the .h files used in all .o binary files

You can use makefiles, but they are not mandatory


Preprocessing directives 

#ifndef EXAMPLE_H 
#define EXAMPLE_H 

#endif

to prevent having two classes with the same name

You can include a .h file in another .h file 

There is a chance that by includng these .h files, the same object could be added twice in one .cpp file 

It is a compilation error to define a class twice

include is a preprocessing step 

the #ifndef is used as condition. If the object was already defined, it is not going to run the code to declare the object again. 

You should add all the includes inside the #define and #endif block. You only put this in the .h file


const values have to be initialized with a value 
private:
    const int value;
This would be an error

When you declare  method with const, it can be called with const objects 

const Object hey{1, 2, 3}

void Object::getId() const{
    ...
}

This is the only typ of method that can be called by the const object 





g++ -c user.cpp -o user.o
g++ -c post.cpp -o post.o
g++ -c socialmediaplatform.cpp -o socialmediaplatform.o
g++ -c socialmedia_test.cpp -o socialmedia_test.o
g++ user.o post.o socialmediaplatform.o socialmedia_test.o -o social_media.exe
./social_media