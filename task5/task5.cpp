#include <iostream>
#include <string>
#include <algorithm>

// Функція для перевірки, чи є число паліндромом
bool isPalindrome(int number) {
    std::string numStr = std::to_string(number);
    std::string reversedStr = numStr;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return numStr == reversedStr;
}

int main() {
    std::cout << "Паліндроми першої сотні, які при піднесенні до квадрата теж дають паліндром:\n";

    for (int i = 1; i < 100; ++i) {
        if (isPalindrome(i)) {
            int squared = i * i;
            if (isPalindrome(squared)) {
                std::cout << i << " (квадрат: " << squared << ")\n";
            }
        }
    }

    return 0;
}
