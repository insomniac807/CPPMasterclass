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

    result = a + b * c -d/e -f + g;
    /*
        according to c++ operator precendence table the above calculation will be solved by all compilers as follows
        6 + 3 * 8 -9/3 -2 + 5
        6 + 24 -9/3 -2 + 5
        6 + 24 -3 -2 +5
        30 -3 -2 +5
        27 -2 +5
        25 + 5
        30
    */
    std::cout << "a + b * c -d/e -f + g = " << result << std::endl; 
    std::cout << "--------------------" << std::endl;
    result = a/b*c+d-e+f;
    /*
        6/3*8+9-3+2
        2*8+9-3+2
        16+9-3+2
        25-3+2
        22+2
        24
    */
    std::cout << "a/b*c+d-e+f = " << result << std::endl; 
    std::cout << "--------------------" << std::endl;
    result = (a + b) * c -d/(e -f) + g;
    /*
        (6 + 3) * 8 - 9 / (3 - 2) + 5
        9 * 8 - 9 / (3 - 2) + 5
        9 * 8 - 9 / 1 + 5
        72 - 9 / 1 + 5
        72 - 9 + 5
        63 + 5
        68
    */
    std::cout << "(a + b) * c -d/(e -f) + g = " << result << std::endl; 
    std::cout << "--------------------" << std::endl;

    /* ########## Prefix & Postfix Incrememnt & Decrement ######### */
    int value {5};
    std::cout << "Postfix increment-> value sent to stream is: " << value++ << std::endl;
    std::cout << "After last output stream value has been incremented to : " << value << std::endl; 
    std::cout << "--------------------" << std::endl;
    value = 5; // reset value
    std::cout << "Postfix decrement-> value sent to stream is: " << value-- << std::endl;
    std::cout << "After last output stream value has been decremented to : " << value << std::endl; 
    std::cout << "--------------------" << std::endl;
    value = 5;
    std::cout << "value is : " << value << std::endl;
    std::cout << "Prefix increment-> value sent to stream is: " << ++value << std::endl; 
    std::cout << "--------------------" << std::endl;
    value = 5; // reset value
    std::cout << "value is : " << value << std::endl;
    std::cout << "Prefix decrement-> value sent to stream is: " << --value << std::endl;
    std::cout << "--------------------" << std::endl;

    /* ######### Relational Operators ########## */
    std::cout << "--------------------" << std::endl;
    return 0;
}