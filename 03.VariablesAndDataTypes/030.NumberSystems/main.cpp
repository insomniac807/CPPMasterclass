/*
    Simple program to demonstrate use of various number systems in C++
*/
#include <iostream>

int main(){

    int num1{15}; //decimal
    int num2{017}; // octal (notated by the leading 0)
    int num3{0x0f}; // hexadecimal (notated by the leading 0x)
    int num4{0b1111}; // (binary (notated by the leading 0b) [only available for C++ 14 and later]

    std::cout << "Hello World, All numbers above should output as the value 15 to the console.." << std::endl;
    std::cout << num1 << std::endl;
    std::cout << num2 << std::endl;
    std::cout << num3 << std::endl;
    std::cout << num4 << std::endl;
    
    return 0;
}