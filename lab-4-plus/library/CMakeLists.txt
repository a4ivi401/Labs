# Створюємо статичну бібліотеку
add_library(StringLib STATIC
        MyString.cpp
        NumericString.cpp
)

target_include_directories(StringLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})