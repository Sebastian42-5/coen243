#include <iostream>
#include <array>
#include "rectangle.h"

Rectangle::Rectangle(){
    width = 0;
    height = 0;
}

void Rectangle::setWidthHeight(int w, int h){
    width = w;
    height = h;
}

void Rectangle::printDimensions(){
    std::cout << width;
    std::cout << height;
}

int Rectangle::getArea(){
    return width * height;
}

int main(){
    Rectangle myRectangle;
    myRectangle.setWidthHeight(2, 3);
    myRectangle.printDimensions();
    std::cout << myRectangle.getArea() << std::endl;
}

// The constructor of the class is called after each instantiation
// objects are also called instances

