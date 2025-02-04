#include <iostream>
#include <iomanip> // для використання setprecision
using namespace std;

// Функція для перевірки, чи температура нижча за абсолютний нуль
bool isBelowAbsoluteZero(double temperature, int scale) {
    if (scale == 1) { // Якщо шкала Цельсія
        return temperature < -273.15;
    } else if (scale == 2) { // Якщо шкала Фаренгейта
        return temperature < -459.67;
    }
    return false;
}

int main(int argc, char* argv[]) {
    // Перевірка кількості аргументів
    if (argc != 3) {
        cout << "Використання: " << argv[0] << " <режим (1 або 2)> <температура>" << endl;
        return 1;
    }

    // Отримання параметрів
    int mode = atoi(argv[1]); // Режим перетворення
    double temperature = atof(argv[2]); // Температура

    // Перевірка на коректність режиму
    if (mode != 1 && mode != 2) {
        cout << "Невірний режим. Використовуйте 1 (Цельсій -> Фаренгейт) або 2 (Фаренгейт -> Цельсій)." << endl;
        return 1;
    }

    // Перевірка на значення нижче абсолютного нуля
    if (isBelowAbsoluteZero(temperature, mode)) {
        cout << "Занадто холодно для підрахунку!" << endl;
        return 0;
    }

    // Перетворення температури
    double convertedTemperature;
    if (mode == 1) { // Цельсій -> Фаренгейт
        convertedTemperature = (temperature * 9 / 5) + 32;
    } else { // Фаренгейт -> Цельсій
        convertedTemperature = (temperature - 32) * 5 / 9;
    }

    // Виведення результату з точністю до двох знаків після коми
    cout << fixed << setprecision(2);
    cout << "Результат: " << convertedTemperature << endl;

    return 0;
}
