#include <iostream>
#include<Windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    int size;

    std::cout << "Введіть число: ";
    std::cin >> size;

    const int maxSize = 100;

    if (size <= maxSize) {
        int array[maxSize][maxSize];
        int value = size;
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                array[i][j] = value;
                value++;
            }
        }
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                std::cout << array[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    else {
        std::cout << "Розмір завеликий для цієї програми." << std::endl;
    }

    return 0;
}

