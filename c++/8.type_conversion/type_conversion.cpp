#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int x = 5.35;

    std::cout << "The value of x is: " << x << std::endl;
    std::cout << "Type of x: " << typeid(x).name() << std::endl;

    double y = (int) 6.78; //convert to integer

    std::cout << "The value of y is: " << y << std::endl;
    std::cout << "Type of y: " << typeid(y).name() << std::endl;

    std::cout << (char) 100 << std::endl;

    return 0;
}