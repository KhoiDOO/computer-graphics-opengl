#include <iostream>

int main() {
    
    int x; // delcaring an integer variable named x

    x = 10; // assigning the value 10 to x

    int y = 6;

    int sum = x + y; // calculating the sum of x and y

    std::cout << "The value of x is: " << x << " Type: " << typeid(x).name() << std::endl; // printing the value of x
    std::cout << "The value of y is: " << y << " Type: " << typeid(y).name() << std::endl; // printing the value of y
    std::cout << "The sum of x and y is: " << sum << " Type: " << typeid(sum).name() << std::endl; // printing the sum of x and y

    int age = 21;
    int year = 2024;
    double days = 7.5;

    // double (number includes decimal points)
    double price = 10.99;
    double temp = 25.1;

    std::cout << "Price: " << price << " Type: " << typeid(price).name() << std::endl;

    // single character
    char grade = 'A';
    char initial = 'J';
    char currecy = '$';

    // boolean (true or false)
    bool student = true;
    bool power = true;

    std::cout << "Student: " << student << " Type: " << typeid(student).name() << std::endl;

    // string (sequence of characters)
    std::string name = "Khoi Do";
    std::string message = "Hello, World!";

    std::cout << "Name: " << name << " Type: " << typeid(name).name() << std::endl;
    std::cout << "Message: " << message << " Type: " << typeid(message).name() << std::endl;

    return 0;
}