#include <iostream>

int main() {
    // Оголошуємо змінні для зберігання розмірів паралелепіпеда
    double A, B, C;

    // Запитуємо користувача ввести розміри
    std::cout << "Enter the length of side A: ";
    std::cin >> A;

    std::cout << "Enter the length of side B: ";
    std::cin >> B;

    std::cout << "Enter the length of side C: ";
    std::cin >> C;

    // Обчислюємо площу поверхні
    double surfaceArea = 2 * (A * B + A * C + B * C);

    // Обчислюємо об'єм
    double volume = A * B * C;

    // Виводимо результати
    std::cout << "Surface Area: " << surfaceArea << std::endl;
    std::cout << "Volume: " << volume << std::endl;

    return 0;
}
