#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t;

using number = int;

int main() {
    pairlist_t student_grades = {
        {"Alice", 85},
        {"Bob", 92},
        {"Charlie", 78}
    };

    text_t message = "Student Grades:\n";
    std::cout << message << std::endl;

    number x = 10;

    std::cout << "x: " << x << std::endl;
}