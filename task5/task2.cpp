#include <iostream>
#include <vector>

using namespace std;

// Функція для побудови та виведення трикутника Паскаля
void printPascalsTriangle(int n) {
    // Використовуємо вектор для збереження трикутника
    vector<vector<int>> triangle(n);

    // Заповнюємо трикутник
    for (int i = 0; i < n; i++) {
        triangle[i].resize(i + 1);  // Кількість елементів у рядку = номер рядка + 1
        triangle[i][0] = triangle[i][i] = 1;  // Перше і останнє число в кожному ряді = 1
        
        // Заповнюємо елементи, що не на краях
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // Виводимо трикутник Паскаля
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Введіть кількість рядків для трикутника Паскаля: ";
    cin >> n;
    printPascalsTriangle(n);
    return 0;
}
