#include <iostream>
#include "Vector2D.h"

#pragma comment(lib, "Vector2D.lib")

using namespace std;

int main() {

    cout << "--- Тестування класу Vector2D (C++) ---" << endl;

    // 1. Виклик конструктора за замовчуванням
    Vector2D v1;
    cout << "v1 (За замовчуванням): X=" << v1.getX() << ", Y=" << v1.getY() << endl;

    // 2. Виклик конструктора з параметрами
    Vector2D v2(3.0, 4.0);
    cout << "\nv2 (З параметрами): X=" << v2.getX() << ", Y=" << v2.getY() << endl;
    cout << "v2 Полярнi координати:" << endl;
    cout << " - Довжина (r): " << v2.getLength() << endl;
    cout << " - Кут (rad): " << v2.getAngle() << endl;

    // 3. Виклик конструктора копіювання
    Vector2D v3 = v2;
    cout << "\nv3 (Копiя v2): X=" << v3.getX() << ", Y=" << v3.getY() << endl;

    return 0;
}