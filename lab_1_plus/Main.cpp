#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>

#include <math.h>
#include "Vector.h"

using namespace std;


double toDegrees(double radians) {
    return radians * (180.0 / M_PI);

}

int main() {
    double inputX, inputY;

    cout << "Введіть координату Х: ";
    cin >> inputX;
    cout << "Введіть координату Y: ";
    cin >> inputY;

    Vector vec(inputX, inputY);

    cout << "---Дані обʼєкта---" << endl;
    cout << "Вектор (" << vec.getX() << "," << vec.getY() << ")" << endl;

    double radius = vec.calculateRadius();
    double angleRad = vec.calculateAngle();

    cout << "---Полярні координати---" << endl;
    cout << fixed << setprecision(3);
    cout << "Радіус (r): " << radius << endl;
    cout << "Кут (радіани): " << angleRad << endl;
    cout << "Кут (градуси): " << toDegrees(angleRad) << endl;

    return 0;
}