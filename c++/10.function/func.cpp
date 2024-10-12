#include <iostream>
#include <cmath>

int main() {
    std::cout << "Hello, World!" << std::endl;

    double x = 3;
    double y = 5;

    double z = pow(x,y); //abs, ceil, round, etc

    std::cout << "The result of " << x << " raised to the power of " << y << " is: " << z << std::endl;

    return 0;
}