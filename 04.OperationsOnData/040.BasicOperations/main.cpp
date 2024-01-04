#include <iostream>

int main(){
    int number1 {2};
    int number2 {7};
    std::cout << "--------------------" << std::endl;
    // Addition
    int result = number1 + number2;
    std::cout << "result : " << result << std::endl; // prints 9
    // Subtraction
    result = number2 - number1;
    std::cout << "result : " << result << std::endl; // prints 5
    // Multiplcation
    result = number1 * number2;
    std::cout << "result : " << result << std::endl; // prints 14
    // Division
    result = number2 / number1; // uneven ingeteger division
    std::cout << "result : " << result << std::endl; //prints 3
    // Molulus
    result = number2 % number1;
    std::cout << "result : " << result << std::endl; // prints 1
    std::cout << "--------------------" << std::endl;
    return 0;
}