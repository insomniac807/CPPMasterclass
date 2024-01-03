/*
    Simple program deonstrating application of statements and function in C++
*/

#include <iostream>

int addNumbers(int num1, int num2)
{
    return num1 + num2;
}

int main(int argc, char **argv)
{
    int firstNumber = 12;
    int secondNumber = 9;
    int sum = firstNumber + secondNumber; 

    std::cout << "First Number: " << firstNumber << std::endl;
    std::cout << "Second Number: " << secondNumber << std::endl;
    std::cout << "The sum of the two numbers is: " << sum << std::endl; // sum is 21

    sum = addNumbers(30, 21);
    std::cout << "Sum is now : " << sum << std::endl; // sum is 51

    std::cout << "Sum is now : " << addNumbers(25,50) << std::endl; // sum is 75
    
    return 0;
}