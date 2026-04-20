#ifndef LABS_MYSTRING_H
#define LABS_MYSTRING_H

#include <string>

class MyString {
protected:
    std::string value;

    public:
    MyString();
    MyString(const std::string &val);
    MyString(const MyString& other);

    virtual ~MyString();

    size_t getLength() const;

    std::string getValue() const;
};

#endif //LABS_MYSTRING_H