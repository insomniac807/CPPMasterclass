/*
    Simple IO streams demo
*/

#include <iostream>

int main(){
    std::cout << "Hello World!" << std::endl;
    std::cerr << "std::cerr : This is an Error Message!!" << std::endl;
    std::clog << "std::clog : This is a std log message!" << std::endl;

    int age;
    std::string name;

    std::cout << "Hello, What is your name?: ";
    std::cin >> name;

    std::cout << "Thank you. What is your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << ". You are " << age << " years old!" << std::endl;

    int houseNo;
    std::string streetName;
    /*
        can take in multiple values space delimited into std::cin
    */
    std::cout << "Please Enter Your House Number and Street Name Seperated by a Space Character: ";
    std::cin >> houseNo >> streetName;

    std::cout << "Thank you " << name << "!" << std::endl << "You live at number " << houseNo << " on " << streetName << "!";
    return 0;
}