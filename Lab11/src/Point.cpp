#include "./Point.hpp"

Point::Point(float x, float y): x(x), y(y) {};

float Point::getX() const {
    return x;
};

float Point::getY() const {
    return y;
};