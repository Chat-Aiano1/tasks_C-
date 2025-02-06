#include <iostream>
#include <vector>

using namespace std;

// Функція для розкладу числа на прості множники
void primeFactorization(int n) {
    vector<int> factors;
    
    // Перевірка на число 2
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }

    // Перевірка на непарні прості числа від 3 до sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }

    // Якщо після ділення залишилось просте число більше 2
    if (n > 2) {
        factors.push_back(n);
    }

    // Виведення результату
    for (int i = 0; i < factors.size(); i++) {
        if (i != 0) cout << ", ";
        cout << factors[i];
    }
}

int main() {
    int n;
    cout << "Введіть число для розкладу на прості множники: ";
    cin >> n;

    cout << "Розклад числа " << n << " на прості множники: ";
    primeFactorization(n);
    cout << endl;

    return 0;
}
