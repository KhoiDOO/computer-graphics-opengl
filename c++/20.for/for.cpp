#include <iostream>

int main() {
    std::string name = "John Doe";

    std::cout << "Name: " << name << " Type: " << typeid(name).name() << std::endl;

    for (int i = 0; i < 10; i++) {
        std::cout << "Number: " << i << " Type: " << typeid(i).name() << std::endl;
    }

    return 0;
}