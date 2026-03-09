#include <iostream>
#include <stdexcept>

class Square {
private:
    // Зберігаємо координати лівої нижньої вершини та довжину сторони
    double x, y;
    double side;

public:
    // 1. Конструктор за умовчанням ТА з параметрами (використання параметрів за умовчанням - вимога лаби)
    Square(double x = 0.0, double y = 0.0, double side = 1.0) : x(x), y(y), side(side) {}

    // 2. Конструктор копіювання
    Square(const Square& other) : x(other.x), y(other.y), side(other.side) {
        std::cout << "[Викликано конструктор копіювання]\n";
    }

    // Методи обчислення площі та периметра
    double getArea() const { return side * side; }
    double getPerimeter() const { return 4 * side; }

    // Методи отримання даних (вершин)
    void printData() const {
        std::cout << "Квадрат [Вершини: (" << x << ", " << y << "), ("
                  << x << ", " << y + side << "), ("
                  << x + side << ", " << y + side << "), ("
                  << x + side << ", " << y << "); Сторона: " << side << "]\n";
    }

    // 3. Перевантаження оператора додавання (Квадрат + Квадрат)
    // Дозволяє ланцюжок K1 + K2 + K3, повертаючи новий об'єкт
    Square operator+(const Square& other) const {
        return Square(x, y, side + other.side); // Для прикладу додаємо довжини сторін
    }

    // Перевантаження додавання (Квадрат + число) для операції "збільшити на 5 одиниць"
    Square operator+(double value) const {
        return Square(x, y, side + value);
    }

    // 4. Перевантаження оператора ділення (Квадрат / Квадрат)
    Square operator/(const Square& other) const {
        if (other.side == 0) {
            throw std::invalid_argument("Ділення на нуль (сторона дорівнює 0)!");
        }
        return Square(x, y, side / other.side); // Для прикладу ділимо сторони
    }
};

int main() {
    std::cout << "=== Дослідження C++ ===\n\n";

    // Створення об'єктів різними конструкторами
    Square K1;                              // Викличеться конструктор за умовчанням (всі параметри дефолтні)
    Square K2(2.0, 3.0, 10.0);              // Конструктор з параметрами
    Square K3(K2);                          // Конструктор копіювання

    std::cout << "Початкові об'єкти:\n";
    std::cout << "K1: "; K1.printData();
    std::cout << "K2: "; K2.printData();
    std::cout << "K3: "; K3.printData();

    // Завдання: "збільшити" на 5 одиниць об’єкт К3
    K3 = K3 + 5.0;
    std::cout << "\nK3 після збільшення на 5 одиниць:\n";
    K3.printData();

    // Завдання: "поділити" об’єкт К2 на об’єкт К3 і результат "помістити" до об’єкта К1
    K1 = K2 / K3;
    std::cout << "\nK1 після K1 = K2 / K3:\n";
    K1.printData();

    // Демонстрація: робота з кількома квадратами одночасно (K1 + K2 + K3)
    Square K_sum = K1 + K2 + K3;
    std::cout << "\nРезультат ланцюжкового додавання (K1 + K2 + K3):\n";
    K_sum.printData();

    return 0;
}