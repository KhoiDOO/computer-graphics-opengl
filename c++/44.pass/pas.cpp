#include <iostream>

void swapStrings(std::string &x, std::string &y);

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::string x = "Hello";
    std::string y = "World!";
    std::string temp;

    swapStrings(x, y);

    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;

    return 0;
}

void swapStrings(std::string &x, std::string &y) {
    std::string temp = x;
    x = y;
    y = temp;
}