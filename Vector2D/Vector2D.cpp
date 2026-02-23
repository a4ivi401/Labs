#include "Vector2D.h"
#include <cmath>

// Реалізація конструктора за замовчуванням
Vector2D::Vector2D() : x(0.0), y(0.0) {}

// Реалізація конструктора з параметрами
Vector2D::Vector2D(double x, double y) : x(x), y(y) {}

// Реалізація конструктора копіювання
Vector2D::Vector2D(const Vector2D& other) : x(other.x), y(other.y) {}

// Реалізація деструктора
Vector2D::~Vector2D() {}

double Vector2D::getX() const { return x; }
double Vector2D::getY() const { return y; }

// Обчислення полярних координат
double Vector2D::getLength() const {
    return std::sqrt(x * x + y * y);
}

double Vector2D::getAngle() const {
    return std::atan2(y, x);
}