#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    // Створення двовимірного масиву
    int arr[m][n];
    
    int num = 0;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            // Заповнюємо зліва направо
            for (int j = 0; j < n; j++) {
                arr[i][j] = num++;
            }
        } else {
            // Заповнюємо справа наліво
            for (int j = n - 1; j >= 0; j--) {
                arr[i][j] = num++;
            }
        }
    }

    // Виведення масиву
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
