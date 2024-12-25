#include <iostream>
#include <cstdlib>

int main() {
    int n;
    std::cout << "Введите размер массива: ";
    std::cin >> n;

    // Динамическое выделение памяти
    int* arr = new int[n];

    // Заполнение массива случайными числами
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100; // случайные числа от 0 до 99
    }

    // Вывод массива и адресов
    std::cout << "Массив:\n";
    for (int i = 0; i < n; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i]
            << ", адрес: " << &arr[i]
            << ", расстояние от начала массива: "
            << (reinterpret_cast<char*>(&arr[i]) - reinterpret_cast<char*>(&arr[0])) << " байт\n";
    }

    // Освобождение памяти
    delete[] arr;
    return 0;
}
