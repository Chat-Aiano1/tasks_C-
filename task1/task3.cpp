#include <iostream>

int main() {

    int a, b;
    std::cout << "Enter the first integer (a): ";
    std::cin >> a;
    std::cout << "Enter the second integer (b): ";
    std::cin >> b;

    int sum = a + b;
    int difference = a - b;
    int product = a * b;

    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << difference << std::endl;
    std::cout << "Product: " << product << std::endl;

    return 0;
}
