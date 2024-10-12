#include <iostream>
#include <string>

void hbd(std::string name);  // Function declaration

int main(){

    std::string name = "John Doe";  // Variable declaration and initialization

    for (int i = 0; i < 5; i++){
        hbd(name);
    }

    // hbd(name);  // Call the function with argument "John Doe"
    return 0;
}

void hbd(std::string name){
    std::cout << "Happy Birthday to You!" << name << std::endl;
}