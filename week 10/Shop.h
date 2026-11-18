#include <vector>
#include "WaterBottle.h"

using namespace std;

class Shop{
    public:
        Shop(vector<WaterBottle> water_bottles);
        ~Shop();
    private:
        vector<WaterBottle> water_bottles;
};