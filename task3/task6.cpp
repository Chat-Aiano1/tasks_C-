#include <iostream>
using namespace std;

int main() {
    int n;

    // Зчитування вхідних даних
    cout << "Введіть висоту сніжинки (n): ";
    cin >> n;

    // Перевірка на коректність введених даних
    if (n < 1 || n > 100) {
        cout << "Неправильні вхідні дані! n повинно бути в діапазоні від 1 до 100." << endl;
        return 1; // Завершення програми з помилкою
    }

    // Визначення розміру сніжинки
    int size = 2 * n - 1; // Розмір сніжинки (ширина та висота)

    // Малювання сніжинки
    for (int i = 0; i < size; i++) { // Цикл для рядків
        for (int j = 0; j < size; j++) { // Цикл для стовпців
            // Умови для малювання зірочок
            if (i == n - 1 || j == n - 1 || i == j || i + j == size - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; // Перехід на новий рядок після завершення рядка
    }

    return 0;
}
