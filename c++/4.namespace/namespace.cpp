#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::cout << "First namespace x: " << first::x << std::endl;
    std::cout << "Second namespace x: " << second::x << std::endl;

    using namespace first;

    std::cout << "Using namespace first, x: " << x << std::endl;
    std::cout << "Using namespace second, x: " << second::x << std::endl;
    
    using namespace std;

    cout << "Using standard namespace, x: " << x << endl;

    return 0;
}