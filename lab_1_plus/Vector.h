#ifndef LABS_VECTOR_H
#define LABS_VECTOR_H


class Vector {
private:
    double x;
    double y;

    public:
    Vector(double xCoord, double yCoord);

    double getX();
    double getY();

    double calculateRadius();
    double calculateAngle();
};


#endif //LABS_VECTOR_H