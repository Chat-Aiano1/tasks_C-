#include <iostream>
#include <iomanip> // для використання setprecision
using namespace std;

int main() {
    // Оголошення змінних для зберігання двох чисел
    double num1, num2;

    // Запит на введення двох чисел від користувача
    cout << "Введіть перше число: ";
    cin >> num1;
    cout << "Введіть друге число: ";
    cin >> num2;

    // Обчислення результатів
    double sum = num1 + num2;       // Сума
    double difference = num1 - num2; // Різниця
    double product = num1 * num2;   // Добуток
    double quotient = num1 / num2;  // Частка

    // Виведення результатів з точністю до 12 знаків після коми
    cout << fixed << setprecision(12); // Встановлення форматування
    cout << "Сума: " << sum << endl;
    cout << "Різниця: " << difference << endl;
    cout << "Добуток: " << product << endl;
    cout << "Частка: " << quotient << endl;

    return 0;
}
