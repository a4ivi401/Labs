#include "Vector.h"
#include <cmath>

Vector::Vector(double xCoord, double yCoord) {
    x = xCoord;
    y = yCoord;
}

double Vector::getX() {
    return x;
}

double Vector::getY() {
    return y;
}

double Vector::calculateRadius() {
    return std::sqrt(x*x + y*y);
}

double Vector::calculateAngle() {
    return std::atan2(y, x);
}



