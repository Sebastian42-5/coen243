#ifndef SHOP_H
#define SHOP_H

#include <vector>
#include "WaterBottle.h"

using namespace std;

class Shop{
    public:
        Shop(vector<WaterBottle> water_bottles) : water_bottles(water_bottles) {} // this is the member initialization list 
        ~Shop();
    private:
        vector<WaterBottle> water_bottles;
};

#endif