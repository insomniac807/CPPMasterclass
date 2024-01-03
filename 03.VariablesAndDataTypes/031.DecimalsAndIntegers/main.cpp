#include <iostream>

int main(){
    int elephant_count; // bad initalisation. can contain random garbage data. WARNING!
    int lion_count{}; // empty curley braces initalisation of integers will store default value of 0

    int dog_count{7}; // initalise int with value of 7
    int cat_count(10); //same as above with value of 10

    int domestic_animal_count {dog_count + cat_count}; // we can use operators to perform basic int calculation in init braces

    // int doesnt_exist_count ( doesnt_exist1 + doesnt-exist2 ); // compiler error as variables have not been declared

    /*
        2.9 is of type double with larger range than int.ERROR or WARNING.
        If try to init in curley braces g++ compile failes
        If init in brackets C++ will truncate everything after the decimal point 
            without performing a round up or down conversion
        i.e. the value of narrowing_conversion below is 2
    */
    int narrowing_conversion (2.9); 
    std::cout << narrowing_conversion << std::endl; // will print 2 to the console
    return 0;
}