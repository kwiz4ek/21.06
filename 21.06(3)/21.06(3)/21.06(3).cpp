#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int NUM_SIDES = 5;
    double sides[NUM_SIDES];
    double perimeter = 0.0;

    std::cout << "Введіть довжини сторін п'ятикутника:\n";
    for (int i = 0; i < NUM_SIDES; ++i) {
        std::cout << "Сторона " << i + 1 << ": ";
        std::cin >> sides[i];
        perimeter += sides[i];
    }

    std::cout << "Периметр п'ятикутника: " << perimeter << std::endl;

    return 0;
}
