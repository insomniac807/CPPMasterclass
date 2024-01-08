#include <iostream>
#include <bitset> 
int main(){
    unsigned short int a {15}; // short int is 2 bytes is 16 bits in size. unsigned gives range 0-255

    std::cout << "a (dec) : " << std::dec << std::showbase << a << std::endl;
    std::cout << "a (hex) : " << std::hex << std::showbase << a << std::endl;
    std::cout << "a (oct) : " << std::oct << std::showbase << a << std::endl;

    /*
        use bitset to output 16 bit binary representation of short int a
    */
    std::cout << "a (binary) : " << std::bitset<16>(a) << std::endl;
    
    return 0;
}