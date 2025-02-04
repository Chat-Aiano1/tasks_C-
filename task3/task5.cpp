#include <iostream>
#include <iomanip> // для використання setw
using namespace std;

int main() {
    int m, n;

    // Зчитування вхідних даних
    cout << "Введіть кількість рядків (m): ";
    cin >> m;
    cout << "Введіть кількість стовпців (n): ";
    cin >> n;

    // Перевірка на коректність введених даних
    if (m < 1 || m > 100 || n < 1 || n > 100) {
        cout << "Неправильні вхідні дані! m і n повинні бути в діапазоні від 1 до 100." << endl;
        return 1; // Завершення програми з помилкою
    }

    // Створення двовимірного масиву
    int arr[100][100]; // Максимальний розмір 100x100

    // Змінні для заповнення спіралі
    int value = 0; // Початкове значення числа
    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    // Заповнення масиву по спіралі
    while (top <= bottom && left <= right) {
        // Рух праворуч по верхньому рядку
        for (int i = left; i <= right; i++) {
            arr[top][i] = value++;
        }
        top++;

        // Рух вниз по правому стовпцю
        for (int i = top; i <= bottom; i++) {
            arr[i][right] = value++;
        }
        right--;

        // Рух ліворуч по нижньому рядку (якщо він існує)
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                arr[bottom][i] = value++;
            }
            bottom--;
        }

        // Рух вгору по лівому стовпцю (якщо він існує)
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                arr[i][left] = value++;
            }
            left++;
        }
    }

    // Виведення масиву
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3) << arr[i][j]; // Виведення числа з фіксованою шириною
        }
        cout << endl; // Перехід на новий рядок після завершення рядка
    }

    return 0;
}
