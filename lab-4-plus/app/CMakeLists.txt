# Створюємо виконуваний файл
add_executable(ConsoleApp main.cpp)

# Підключаємо нашу статичну бібліотеку до консольного додатку
target_link_libraries(ConsoleApp StringLib)