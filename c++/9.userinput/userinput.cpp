#include <iostream>
#include <string>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << "!" << std::endl;

    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Your age is " << age << "." << std::endl;

    return 0;
}