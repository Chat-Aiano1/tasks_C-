#include <iostream>
#include <string>

int main() {
    std::cout << "Enter the name: ";
    std::string name;
    std::getline(std::cin, name);
    std::cout << "Hello " << name << "!" << std::endl;

    return 0;
}
