#include <iostream>
#include <vector>

using namespace std;

// Функція для знаходження простих чисел за допомогою решета Ератосфена
void sieveOfEratosthenes(int n) {
    // Створюємо вектор розміру n+1, заповнений значеннями true (всі числа спочатку вважаються простими)
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;  // 0 і 1 не є простими числами
    
    // Алгоритм решета Ератосфена
    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {  // Якщо число є простим
            for (int j = i * i; j <= n; j += i) {  // Відмічаємо всі кратні числа як складені
                isPrime[j] = false;
            }
        }
    }

    // Виведення простих чисел
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
}

int main() {
    int n = 1000;  // Шукаємо прості числа до 1000
    cout << "Прості числа до " << n << ":\n";
    sieveOfEratosthenes(n);
    cout << endl;
    return 0;
}
