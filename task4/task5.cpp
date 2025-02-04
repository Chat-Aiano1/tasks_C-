#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    // Створення масиву розміру m на n
    int arr[m][n];

    // Ініціалізація меж
    int top = 0, bottom = m - 1, left = 0, right = n - 1;
    int num = 0;

    // Заповнення масиву по спіралі
    while (top <= bottom && left <= right) {
        // Заповнення верхнього ряду (зліва направо)
        for (int i = left; i <= right; i++) {
            arr[top][i] = num++;
        }
        top++;

        // Заповнення правого стовпця (згори вниз)
        for (int i = top; i <= bottom; i++) {
            arr[i][right] = num++;
        }
        right--;

        if (top <= bottom) {
            // Заповнення нижнього ряду (справа наліво)
            for (int i = right; i >= left; i--) {
                arr[bottom][i] = num++;
            }
            bottom--;
        }

        if (left <= right) {
            // Заповнення лівого стовпця (знизу вгору)
            for (int i = bottom; i >= top; i--) {
                arr[i][left] = num++;
            }
            left++;
        }
    }

    // Виведення результату
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
