#include <iostream>
#include <string>

int main() {
    std::string name = "John Doe";

    std::cout << "Name: " << name << " Type: " << typeid(name).name() << std::endl;

    if (name.length() > 10) {
        std::cout << "Name is too long." << std::endl;
    }
    else {
        std::cout << "Name is short." << std::endl;
    }

    if(name.empty()) {
        std::cout << "Name is empty." << std::endl;
    }
    else {
        std::cout << "Name is not empty." << std::endl;
    }

    return 0;
}