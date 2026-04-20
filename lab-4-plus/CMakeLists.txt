    cmake_minimum_required(VERSION 3.10)
    project(lab-4)

    set(CMAKE_CXX_STANDARD 14)

    # Підключаємо наші піддиректорії
    add_subdirectory(library)
    add_subdirectory(app)