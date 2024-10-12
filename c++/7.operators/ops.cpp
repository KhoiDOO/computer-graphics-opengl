#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;

    int students = 20;

    students += 1; //eqiv students ++

    std::cout << "Number of students: " << students << std::endl;

    students = students - 2; //eqiv students-=2

    std::cout << "Number of students after decrement: " << students << std::endl;

    return 0;
}