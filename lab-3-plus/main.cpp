#include <iostream>
#include <stdexcept>

class Square {
private:
    double x, y;
    double side;

public:
    Square(double x = 0.0, double y = 0.0, double side = 1.0) : x(x), y(y), side(side) {}

    Square(const Square& other) : x(other.x), y(other.y), side(other.side) {
        std::cout << "[Викликано конструктор копіювання]\n";
    }

    double getArea() const { return side * side; }
    double getPerimeter() const { return 4 * side; }

    void printData() const {
        std::cout << "Квадрат [Вершини: (" << x << ", " << y << "), ("
                  << x << ", " << y + side << "), ("
                  << x + side << ", " << y + side << "), ("
                  << x + side << ", " << y << "); Сторона: " << side << "]\n";
    }

    Square operator+(const Square& other) const {
        return Square(x, y, side + other.side); // Для прикладу додаємо довжини сторін
    }

    Square operator+(double value) const {
        return Square(x, y, side + value);
    }

    Square operator/(const Square& other) const {
        if (other.side == 0) {
            throw std::invalid_argument("Ділення на нуль (сторона дорівнює 0)!");
        }
        return Square(x, y, side / other.side); // Для прикладу ділимо сторони
    }
};

int main() {
    std::cout << "=== Lab 3 ===\n\n";

    Square K1;
    Square K2(2.0, 3.0, 10.0);
    Square K3(K2);

    std::cout << "Початкові об'єкти:\n";
    std::cout << "K1: "; K1.printData();
    std::cout << "K2: "; K2.printData();
    std::cout << "K3: "; K3.printData();

    K3 = K3 + 5.0;
    std::cout << "\nK3 після збільшення на 5 одиниць:\n";
    K3.printData();

    K1 = K2 / K3;
    std::cout << "\nK1 після K1 = K2 / K3:\n";
    K1.printData();
    
    Square K_sum = K1 + K2 + K3;
    std::cout << "\nРезультат ланцюжкового додавання (K1 + K2 + K3):\n";
    K_sum.printData();

    return 0;
}