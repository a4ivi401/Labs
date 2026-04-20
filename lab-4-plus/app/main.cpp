#include <iostream>
#include <string>
#include "NumericString.h"

int main() {
    std::cout << "--- Дослідження механізму одиночного успадкування ---\n\n";

    std::string userInput;
    std::cout << "Введіть цифровий рядок: ";
    std::cin >> userInput;

    NumericString numStr(userInput);

    std::cout << "\nПочатковий рядок: " << numStr.getValue() << std::endl;

    std::cout << "Довжина рядка: " << numStr.getLength() << " символів" << std::endl;

    NumericString copiedStr = numStr;
    std::cout << "\nСтворено копію об'єкта через конструктор копіювання.\n";

    copiedStr.reverseString();
    std::cout << "Обернений рядок (в копії): " << copiedStr.getValue() << std::endl;

    std::cout << "Оригінальний рядок залишився: " << numStr.getValue() << std::endl;

    return 0;
}