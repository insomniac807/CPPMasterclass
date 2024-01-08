#include <iostream>
#include <bitset> 

int main(){
    unsigned short int value {0xff0};
    std::cout << "--------------------" << std::endl;
    std::cout 
        << "value : " << std::hex << value 
        << ",\n(dec) : " << std::dec << value 
        << ",\n(binary) : " << std::bitset<16>(value) 
    << std::endl;
    std::cout << "--------------------" << std::endl;
    auto shifted = (value << 1); // auto converts to int as no static_cast<>() call to convert back to unsigned short int
    std::cout 
    << "sizeof(shifted) : " << sizeof(shifted) << std::endl; // shifted here will be 4 bytes as it is an int
    std::cout << "shifted (dec) : " << std::dec << shifted << std::endl;
    std::cout << "value (dec) : " << std::dec << value << std::endl; // value has not changed
    std::cout << "--------------------" << std::endl;
    std::cout << "--------------------" << std::endl;
    // start with our initalized value
    std::cout
        << "value : "
        << std::bitset<16>(value) 
        << ", (dec) : " 
        << std::dec
        << value 
    << std::endl;
    //bitshift left by 1
    value = static_cast<unsigned short int>(value << 1); // static_cast<>() to ensure value stays unsigned short int type
    std::cout
        << "value : "
        << std::bitset<16>(value) 
        << ", (dec) : " 
        << std::dec
        << value 
    << std::endl;
    //bitshift left by 1
    value = static_cast<unsigned short int>(value << 1);
    std::cout
        << "value : "
        << std::bitset<16>(value) 
        << ", (dec) : " 
        << std::dec
        << value 
    << std::endl;
    //bitshift left by 1
    value = static_cast<unsigned short int>(value << 1);
    std::cout
        << "value : "
        << std::bitset<16>(value) 
        << ", (dec) : " 
        << std::dec
        << value 
    << std::endl;
    //bitshift left by 1
    value = static_cast<unsigned short int>(value << 1);
    std::cout
        << "value : "
        << std::bitset<16>(value) 
        << ", (dec) : " 
        << std::dec
        << value 
    << std::endl;
    //bitshifting left by one this time will cause us to lose a 1 bit resulting in errorneous data
    value = static_cast<unsigned short int>(value << 1);
    std::cout
        << "value : "
        << std::bitset<16>(value) 
        << ", (dec) : " 
        << std::dec
        << value 
        << " .....N.B. DATA HAS BECOME CORRUPT AT THIS POINT!....."
    << std::endl;
    std::cout << "--------------------" << std::endl;
    return 0;
}