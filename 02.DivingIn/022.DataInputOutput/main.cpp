/*
    Simple IO streams demo
*/

#include <iostream>
#include <string> // new (to us) object from standard library. Very commonly used for obvious reasons

int main(){
    /* 
        Some example output streams...

        std::cout << "Hello World!" << std::endl;
        std::cerr << "std::cerr : This is an Error Message!!" << std::endl;
        std::clog << "std::clog : This is a std log message!" << std::endl; 
    */

    int age;
    std::string name;

    std::cout << "Hello, What is your name?: ";
    std::cin >> name;
    std::cin.clear(); // N.B. flush the input stream to get rid of trailing line termination characters

    std::cout << "Thank you. What is your age?: ";
    std::cin >> age;
    std::cin.clear();

    std::cout << "Hello " << name << ". You are " << age << " years old!" << std::endl;

    /*     
        int houseNo;
        std::string streetName;
        
        //can take in multiple values space or carraige return delimited into std::cin
        
        std::cout << "Please Enter Your House Number and Street Name: ";
        std::cin >> houseNo >> streetName;

        std::cout << "Thank you " << name << "!" << std::endl << "You live at number " << houseNo << " on " << streetName << "!"; 
    */

    // Take in Strings as input stream
    std::string houseNumber;
    std::string streetName;
    std::cout << "Please Enter Your House Number and Street Name: " << std::endl;

    /*
        line 51 below blocks trailing characters from previous std::cin call
        std::cin.clear() will not work here. Why?
    */
    std::cin.ignore(); 
    std::getline(std::cin, houseNumber);
    std::getline(std::cin, streetName);

    std::cout << "Thank you " << name << "!" << std::endl << "You live at number " << houseNumber << " on " << streetName << "!" << std::endl;
    return 0;
}