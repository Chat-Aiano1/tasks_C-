#include <iostream>
#include <iomanip> // Для форматування виведення

int main() {
    // Оголошуємо змінну для зберігання радіусу
    double R;

    // Запитуємо користувача ввести радіус
    std::cout << "Enter the radius (R): ";
    std::cin >> R;

    // Задаємо значення числа pi
    const double pi = 3.14;

    // Обчислюємо площу круга
    double area = pi * R * R;

    // Обчислюємо довжину кола
    double circumference = 2 * pi * R;

    // Виводимо результати з точністю до двох знаків після коми
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Area of the circle: " << area << std::endl;
    std::cout << "Circumference of the circle: " << circumference << std::endl;

    return 0;
}
