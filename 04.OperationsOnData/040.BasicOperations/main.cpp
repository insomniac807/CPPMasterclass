#include <iostream>

int main(){

    /* ########## Basic Integer Arithmetic ########## */
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
    // Modulus
    result = number2 % number1;
    std::cout << "result : " << result << std::endl; // prints 1
    std::cout << "--------------------" << std::endl;

    /* ########## Precedence & Associations ########## */
    std::cout << "--------------------" << std::endl;
    int a {6};
    int b {3};
    int c {8};
    int d {9};
    int e {3};
    int f {2};
    int g {5};

    result = a + b * c -d/e -f + g; // solves to 30
    /*
        according to c++ operator precendence table the above calculation will be solved by all compilers as follows
        6 + 3 * 8 -9/3 -2 + 5
        6 + 24 -3 -2 +5
        30 -5 +5
        30
    */
    std::cout << "a + b * c -d/e -f + g = " << result << std::endl; 
    return 0;
}