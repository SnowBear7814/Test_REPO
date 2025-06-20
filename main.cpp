#include <iostream>

// Функция для сложения двух чисел
int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "Hello, C++!" << std::endl;

    int num1 = 5;
    int num2 = 7;
    int sum = add(num1, num2);

    std::cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << std::endl;

    return 0;
}