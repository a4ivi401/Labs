#pragma once

class Vector2D {
private:
    double x;
    double y;

public:
    // Конструктор за замовчуванням
    Vector2D();

    // Конструктор з параметрами
    Vector2D(double x, double y);

    // Конструктор копіювання
    Vector2D(const Vector2D& other);

    // Деструктор
    ~Vector2D();

    double getX() const;
    double getY() const;

    double getLength() const; // Радіус
    double getAngle() const;  // Кут у радіанах
};