#include <iostream>
using namespace std;

int main() {
    // Оголошення змінної типу char
    char symbol;

    // Запит на введення символу від користувача
    cout << "Введіть символ: ";
    cin >> symbol;

    // Виведення символу та його ASCII-коду
    cout << "Символ: " << symbol << endl;
    cout << "ASCII-код (десятковий): " << int(symbol) << endl;
    cout << "ASCII-код (шістнадцятковий): " << hex << int(symbol) << endl;

    return 0;
}
