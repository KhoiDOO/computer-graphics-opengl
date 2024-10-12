#include <iostream>

int main() {
    
    int *pnum = NULL;

    pnum = new int; // allocate memory for an integer

    *pnum = 10; // assign the value 10 to the allocated memory

    std::cout << "address: " << pnum << std::endl;
    std::cout << "value: " << *pnum << std::endl; // print the value of the integer

    delete pnum; // deallocate the memory

    std::cout << "address: " << pnum << std::endl; // print the address of the integer (should be NULL now)

    int size = 3;

    char *pchar = NULL;
    
    pchar = new char[size]; // allocate memory for a character

    for(int i = 0; i < size; i++) {
        pchar[i] = 'A' + i; // assign the character 'A' + i to the allocated memory
    }

    for(int i = 0; i < size; i++) {
        std::cout << "value: " << pchar[i] << std::endl; // print the address and value of the character
    }

    return 0;
}