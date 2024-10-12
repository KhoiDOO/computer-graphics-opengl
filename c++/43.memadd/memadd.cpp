#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::string name = "Alice";
    int age = 21;
    bool started = false;

    std::cout << &name << std::endl; //address of name variable
    std::cout << &age << std::endl; //address of age variable
    std::cout << &started << std::endl; //address of started variable

    return 0;
}