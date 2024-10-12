#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::string car = "toyota";

    std::cout << "My favorite car is a " << car << "." << std::endl;

    std::string name[] = {"Alice", "Bob", "Charlie"};

    for (int i = 0; i < 3; i++) {
        std::cout << "Hello, " << name[i] << "!" << std::endl;
    }

    return 0;
}