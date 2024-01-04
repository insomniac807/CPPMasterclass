#include <iostream>

int main(){
    char character1 = 'a';
    char character2 = 'b';
    char character3 = 'c';
    char character4 = 'd';
    char character5 = 'e';
    char character6 = 'f';

    std::cout << "\n------------------\n";
    std::cout << "character1 : " << character1 << std::endl;
    std::cout << "character2 : " << character2 << std::endl;
    std::cout << "character3 : " << character3 << std::endl;
    std::cout << "character4 : " << character4 << std::endl;
    std::cout << "character5 : " << character5 << std::endl;
    std::cout << "character6 : " << character6 << std::endl;
    std::cout << "------------------\n";

    char character_ascii = 76;
    std::cout << "\n------------------\n";
    std::cout << "character_ascii : " << character_ascii << std::endl;
    std::cout << "character_ascii(int) : " << static_cast<int>(character_ascii) << std::endl;
    std::cout << "------------------\n";
    return 0;
}