#include "Vector.h"
#include <cmath>

Vector::Vector(double xCoord, double yCoord) {
    x = xCoord;
    y = yCoord;
}

double Vector::getX() const {
    return x;
}

double Vector::getY() const {
    return y;
}

double Vector::calculateRadius() const {
    return std::sqrt(x*x + y*y);
}

double Vector::calculateAngle() const {
    return std::atan2(y, x);
}



