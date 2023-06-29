#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double totalProfit = 0;
    for (int month = 1; month <= 6; ++month) {
        double profit;
        std::cout << "Введіть прибуток за місяць " << month << ": ";
        std::cin >> profit;
        totalProfit += profit;
    }

    std::cout << "Загальний прибуток за 6 місяців: " << totalProfit << std::endl;

    return 0;
}
