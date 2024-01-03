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
        If init in brackets (called functional initalisation) g++ will truncate everything after the decimal point 
            without performing a round up or down conversion
        i.e. the value of narrowing_conversion below is 2
    */
    int narrowing_conversion (2.9); 
    std::cout << narrowing_conversion << std::endl; // will print 2 to the console
    std::cout << std::endl;
    std::cout << elephant_count << std::endl; // random value (possible 0 depending on compiler but not safe)
    std::cout << lion_count << std::endl; // prints 0
    std::cout << dog_count << std::endl; // prints 7
    std::cout << cat_count << std::endl; // prints 10

    // values below should be the same as elephant_count is of type int
    //sizeof() returns the size of the object or datatype in memory (in bytes)
    std::cout << sizeof(int) << std::endl; // prints 4 as 4 int is 4 bytes of memory
    std::cout << sizeof(elephant_count) << std::endl; // prints 4 as elephant_count is an int

    return 0;
}