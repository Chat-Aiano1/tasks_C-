#include <iostream>
using namespace std;

void drawSnowflake(int n) {
    // Центр сніжинки
    int center = n / 2;

    // Малюємо сніжинку
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Горизонтальний промінь
            if (i == center) {
                cout << "*";
            }
            // Вертикальний промінь
            else if (j == center) {
                cout << "*";
            }
            // Діагональні промені
            else if (i == j || i + j == n - 1) {
                cout << "*";
            }
            // Пробіли
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Введіть висоту сніжинки: ";
    cin >> n;

    // Перевірка на коректність введення
    if (n < 1 || n > 100) {
        cout << "Невірне значення n. Введіть число від 1 до 100." << endl;
        return 1;
    }

    // Виведення сніжинки
    drawSnowflake(n);

    return 0;
}
