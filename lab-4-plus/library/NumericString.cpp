#include "NumericString.h"
#include <algorithm>

// Явний виклик конструктора базового класу за замовчуванням
NumericString::NumericString() : MyString() {}

// Явний виклик конструктора базового класу з параметром
NumericString::NumericString(const std::string& val) : MyString(val) {
    // Тут можна було б додати перевірку, чи рядок складається лише з цифр
}

// Явний виклик конструктора копіювання базового класу
NumericString::NumericString(const NumericString& other) : MyString(other) {}

// Деструктор
NumericString::~NumericString() {}

// Реалізація обернення рядка
void NumericString::reverseString() {
    // Оскільки value є protected у базовому класі, ми маємо до нього прямий доступ тут
    std::reverse(value.begin(), value.end());
}