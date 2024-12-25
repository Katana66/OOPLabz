#include <iostream>
using namespace std;
int main() {
    const int n = 10;
    short* arr = new short[n]; // Динамическое выделение памяти для массива

    cout << "Введите 10 чисел типа short: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "\nСодержимое массива: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << "\nАдрес начала массива: " << arr << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Элемент " << i << ": значение = " << arr[i]
            << ", адрес = " << (arr + i)
            << ", расстояние от начала = " << (arr + i) - arr << endl;
    }

    delete[] arr; // Удаление массива
    return 0;
}
