#include <iostream>

int main() {

    int *pointer = nullptr;
    int x = 123;

    pointer = &x; // assign the address of x to pointer

    if(pointer == nullptr) {
        std::cout << "Pointer is nullptr" << std::endl;
    }
    else{
        std::cout << "Pointer is not nullptr" << std::endl;
        std::cout << "Value at pointer: " << *pointer << std::endl;
        *pointer = 456;
        std::cout << "New value of x: " << x << std::endl;
    }

    int *new_pointer = nullptr;

    if(new_pointer == nullptr) {
        std::cout << "Pointer is nullptr" << std::endl;
    }
    else{
        std::cout << "Pointer is not nullptr" << std::endl;
    }

    return 0;
}