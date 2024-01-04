/*
    Simple demo of boolean operations
*/

#include <iostream>

int main(){
    bool red_light {true};
    bool green_light {false};

    std::cout << "--------------------\n";
    if(red_light) {
        std::cout << "Stop!!" << std::endl;
    } else {
        std::cout << "Keep Going!!!" << std::endl;
    }

    if(green_light) {
        std::cout << "GO GO GO!!!" << std::endl;
    } else {
        std::cout << "NO NO NO!!!" << std::endl;
    }

    std::cout << "--------------------\n";
    std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl; // prints 1 (because 1 byte)
    std::cout << "value of red_light: " << red_light << std::endl; // prints 1 (because true)
    std::cout << "value of green_light: " << green_light << std::endl; // prints 0 (because false)
    std::cout << "-------------------\n";

    return 0;
}