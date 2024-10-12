#include <iostream>

int main() {
    
    std::string name = "Alice";
    std::string *pname = &name;

    std::cout << "Name Pointer: " << pname << std::endl;
    // std::cout << "Unknown Pointer: " << pname - 1 << std::endl;
    std::cout << "Name: " << *pname << std::endl;
    // std::cout << "Unknown Value: " << *(pname - 1) << std::endl;

    std::string pizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::cout << pizzas << std::endl;
    std::cout << *pizzas << std::endl;
    std::cout << *(pizzas + 1) << std::endl;

    return 0;
}