#include <iostream>

double getTotal(double prices[], int size) {
    double sum = 0.0;

    for (int i = 0; i < 3; i++) {
        sum += prices[i];
    }

    return sum;
}

int main() {
    std::cout << "Hello, World!" << std::endl;

    double prices[] = {49.99, 15.05, 20.24};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = getTotal(prices, size);

    std::cout << "Total price: $" << total << std::endl;

    return 0;
}