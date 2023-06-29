#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 5;
    int arr[SIZE];

    std::cout << "Введіть " << SIZE << " элементів масива:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Масив у зворотному порядку:\n";
    for (int i = SIZE - 1; i >= 0; --i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
