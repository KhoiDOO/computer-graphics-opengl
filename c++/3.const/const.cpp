#include <iostream>

int main() {
    
    const double PI = 3.14159;
    const double R = 5.0;
    double circumference = 2 * PI * R;
    double area = PI * R * R;

    std::cout << "The circumference of the circle is: " << circumference << "cm" << std::endl;
    std::cout << "The area of the circle is: " << area << "cm2" << std::endl;

    return 0;
}