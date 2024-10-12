#include <iostream>

int main() {
    
    int number;

    // while (number < 0){
    //     std::cout << "Enter a positive integer: ";
    //     std::cin >> number;
    // }

    do {
        std::cout << "Enter a positive integer: ";
        std::cin >> number;
    } while (number < 0); // Continue the loop until the user enters a positive integer.

    std::cout << "You entered: " << number << std::endl;

    return 0;
}