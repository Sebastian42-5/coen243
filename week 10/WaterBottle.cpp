#include <iostream>
#include "WaterBottle.h"

using namespace std;

// this is a default constructor

WaterBottle::WaterBottle(): volume(0), height(0) {}

WaterBottle::~WaterBottle(){
    cout << "The water bottle got destroyed" << endl;
}

// this is a parametrized constructor

WaterBottle::WaterBottle(double v, int h): volume(v), height(h) {};

void WaterBottle::addWater(double v){
    volume += v;
}

double WaterBottle::getVolume() const{
    return volume;
}

// method that is forced to modify any of the values of the object 


int main(){
    WaterBottle wb;
    WaterBottle wb2(50, 4);

    cout << wb2.getVolume() << endl;
}

// The destructor of an object will be called at the end of the scope it is declared in 

// each time the scope ends, the destrcutor gets activated and the object gets deallocated from memory

// Implementation in .cpp, specifications in .h



