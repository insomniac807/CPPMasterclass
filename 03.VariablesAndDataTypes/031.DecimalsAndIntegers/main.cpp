#include <iostream>

int main(){

    /* ########## BASIC INT DECLARATIONS ########### */

    int elephant_count; // bad initalisation. can contain random garbage data. WARNING!
    int lion_count{}; // empty curley braces initalisation of integers will store default value of 0
    int dog_count{7}; // initalise int with value of 7
    int cat_count(10); //same as above with value of 10
    int domestic_animal_count {dog_count + cat_count}; // we can use operators to perform basic int calculation in init braces
    // int doesnt_exist_count ( doesnt_exist1 + doesnt_exist2 ); // compiler error as variables have not been declared
    /*
        2.9 is of type double with larger range than int.ERROR or WARNING.
        If try to init in curley braces g++ compile failes
        If init in brackets (called functional initalisation) g++ will truncate everything after the decimal point 
            without performing a round up or down conversion
        i.e. the value of narrowing_conversion below is 2
        N.B. Assignment initalization (using = operator) will also truncate everthing after decimal point and store
            int value without performing round up or down operations.
    */
    int narrowing_conversion (2.9); 
    std::cout << narrowing_conversion << std::endl; // will print 2 to the console
    std::cout << std::endl;
    //output our previous variables
    std::cout << elephant_count << std::endl; // random value (possible 0 depending on compiler but not safe)
    std::cout << lion_count << std::endl; // prints 0
    std::cout << dog_count << std::endl; // prints 7
    std::cout << cat_count << std::endl; // prints 10
    std::cout << domestic_animal_count << std::endl; // prints 17
    std::cout << std::endl;
    /*
        values below should be the same as elephant_count is of type int
        sizeof() returns the size of the object or datatype in memory (in bytes)
    */
    std::cout << sizeof(int) << std::endl; // prints 4 as int is 4 bytes of memory
    std::cout << sizeof(elephant_count) << std::endl; // prints 4 as elephant_count is an int


    /* ############ INTEGER MODIFIERS ############### */

    /*
        ints are signed by default. 
        i.e. the value of an int can contain positive or negative numbers
        we can expressly declare that we want our integers to store positive or negative numbers using the "signed" modifier keyword
        however ints are signed by default so this is not strictly nessecary
    */
    signed int num1 {10};
    signed int num2 {-300};
    int num3 {10};
    int num4 {-300};
    /*
        If we want our integer variables to store only positive integers we can use the "unsigned" modifier
        This increases the range of our posssible positive integer values
        Remember and int is 32 bits (4 bytes) of memory
        signed ints use half of this memory for positive values and half of this memory for negative values
        unsigned ints use the full 32 bits for a range of positive whole number values including 0
    */
    unsigned int a {10000};
    // unsigned int b {-500}; //this wont compile (test it)

    /*
        3 other modifiers for integers are "short", "long" and "long long"
        short allocates 2 bytes of memory (16 bits) for any int, signed or unsigned
        long allocates 4 OR 8 bytes of memory (32 OR 64 bits)
        long long allocates 8 bytes (64 bits)

        These modifiers will only work for Integral types (whole number types)
        Will not work for fractional numbers
    */
    return 0;
}