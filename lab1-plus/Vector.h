#pragma once
#define LABS_VECTOR_H


class Vector {
private:
    double x;
    double y;

public:
    Vector(double xCoord, double yCoord);

    double getX() const;
    double getY() const;

    double calculateRadius() const;
    double calculateAngle() const;
};
