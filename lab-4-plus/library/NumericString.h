#ifndef NUMERICSTRING_H
#define NUMERICSTRING_H

#include "MyString.h"

class NumericString : public MyString {
public:
    // Конструктори
    NumericString();
    NumericString(const std::string& val);
    NumericString(const NumericString& other);

    ~NumericString();

    // Метод обернення цифрового рядка
    void reverseString();
};

#endif