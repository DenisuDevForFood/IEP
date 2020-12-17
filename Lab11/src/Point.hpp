#ifndef IEP_POINT_HPP
#define IEP_POINT_HPP



#include <iostream>
#include <math.h>

class Point {
    private:
        float x;
        float y;
    public:
        Point(float x, float y);
        float getX();
        float getY();

};

#endif //IEP_POINT_HPP
