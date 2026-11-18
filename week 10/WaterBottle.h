#ifndef WATERBOTTLE_H
#define STUDENT_H

class WaterBottle {

public:
    WaterBottle();
    WaterBottle(double v, int h);
    ~WaterBottle();   // no arguments, can't be overloaded, must be public. This is the destructors
                      // (if private, you get a compile-time error when creating a stack object)

    void addWater(double volume);
    double getVolume() const;   // added so you can actually check the result
    // the const means it won't modify any member variables in the object 

private:
    double volume;
    int height;
};

#endif

