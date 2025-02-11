#include <iostream>
#include <vector>
#include <cmath>

// Функція для перевірки, чи є число простим
bool isPrime(int num) {
    if (num <= 1) return false; // 0 та 1 не є простими
    if (num == 2) return true;  // 2 — єдине парне просте число
    if (num % 2 == 0) return false; // Інші парні числа не є простими

    // Перевіряємо дільники від 3 до квадратного кореня з num
    for (int i = 3; i <= std::sqrt(num); i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "Введіть число n: ";
    std::cin >> n;

    std::vector<std::pair<int, int>> twinPrimes;

    // Перебираємо числа від n до 2n
    for (int i = n; i <= 2 * n - 2; ++i) {
        if (isPrime(i) && isPrime(i + 2)) {
            twinPrimes.push_back({i, i + 2});
        }
    }

    // Виводимо результати
    if (twinPrimes.empty()) {
        std::cout << "У діапазоні між " << n << " та " << 2 * n << " немає пар простих чисел-близнюків.\n";
    } else {
        std::cout << "Пари простих чисел-близнюків між " << n << " та " << 2 * n << ":\n";
        for (const auto& pair : twinPrimes) {
            std::cout << "(" << pair.first << ", " << pair.second << ")\n";
        }
    }

    return 0;
}
