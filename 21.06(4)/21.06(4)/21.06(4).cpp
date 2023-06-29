#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int NUM_MONTHS = 12;
    double profits[NUM_MONTHS];
    double maxProfit = 0.0;
    double minProfit = 0.0;
    int maxMonth = 0;
    int minMonth = 0;

    std::cout << "Введіть прибуток за кожний місяць:\n";
    for (int i = 0; i < NUM_MONTHS; ++i) {
        std::cout << "Прибуток за місяць " << i + 1 << ": ";
        std::cin >> profits[i];

        if (profits[i] > maxProfit) {
            maxProfit = profits[i];
            maxMonth = i + 1;
        }

        if (profits[i] < minProfit || i == 0) {
            minProfit = profits[i];
            minMonth = i + 1;
        }
    }

    std::cout << "Місяць із максимальним прибутком: " << maxMonth << std::endl;
    std::cout << "Місяць із мінімальним прибутком: " << minMonth << std::endl;

    return 0;
}
