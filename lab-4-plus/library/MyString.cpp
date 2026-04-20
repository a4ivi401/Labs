#include "MyString.h"


MyString::MyString() : value("") {}


MyString::MyString(const std::string& val) : value(val) {}


MyString::MyString(const MyString& other) : value(other.value) {}


MyString::~MyString() {}


size_t MyString::getLength() const {
    return value.length();
}


std::string MyString::getValue() const {
    return value;
}