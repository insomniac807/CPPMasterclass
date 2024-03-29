#include <iostream>
#include <iomanip> // explained in more detail later in the course but for this program ref line 100

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
   std::cout << "------------------------" << std::endl;
    int narrowing_conversion (2.9); 
    std::cout << "narrowing_conversion : " << narrowing_conversion << std::endl; // will print 2 to the console
    std::cout << "-----------------------" << std::endl;
    //output our previous variables
    std::cout << "elephant_count : " << elephant_count << std::endl; // random value (possible 0 depending on compiler but not safe)
    std::cout << "lion_count : " << lion_count << std::endl; // prints 0
    std::cout << "dog_count : " << dog_count << std::endl; // prints 7
    std::cout << "cat_count : " << cat_count << std::endl; // prints 10
    std::cout << "domestic_animal_count : " << domestic_animal_count << std::endl; // prints 17
    std::cout << "-----------------------" << std::endl;
    /*
        values below should be the same as elephant_count is of type int
        sizeof() returns the size of the object or datatype in memory (in bytes)
    */
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl; // prints 4 as int is 4 bytes of memory
    std::cout << "sizeof(elephant_count) : " << sizeof(elephant_count) << std::endl; // prints 4 as elephant_count is an int


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

    short int short_int {-10};
    unsigned long int long_int {1000000000};
    signed long long int long_long_int {-5000000000000};

    std::cout << std::endl;
    std::cout << "short_int : " << short_int << std::endl;
    std::cout << "long_int : " << long_int << std::endl;
    std::cout << "long_long_int : " << long_long_int << std::endl;

    std::cout << "sizeof(short_int) : " << sizeof(short_int) << std::endl;
    std::cout << "sizeof(long_int) : " << sizeof(long_int) << std::endl;
    std::cout << "sizeof(long_long_int) : " << sizeof(long_long_int) << std::endl;


    /* ########## Decimal Point Numbers ########## */

    float f {1.12345678901234567890f}; // precision : 7
    double d {1.12345678901234567890}; // precision : 15
    long double ld {1.12345678901234567890L}; // precision : >= 15
    double fd {123456789.0f}; // because of f delimiter at end of number double gets converted to floating point number. loss of precision
    long double ld2 {1.1234567890123456789}; // because of lack of delimiter L, long double gets converted back to double. possible loss of precision
    std::cout << "\n------------------------------------\n";
    //Print out the sizes
    std::cout << "sizeof float : " << sizeof(float) << std::endl;
    std::cout << "sizeof double : " << sizeof(double) << std::endl;
    std::cout << "sizeof long double : " << sizeof(long double) << std::endl;
    std::cout << "\n------------------------------------\n";
    //Precision
    /*
        Control the precision from std::cout. 
        Doesn't control accuracy, only how many places of decimal are printed. 
        Accuracy determined by data type
    */
    std::cout << std::setprecision(20); // 
    std::cout << "float f : " << f << " : loss of precision after 7 decimal bits" << std::endl;
    std::cout << "double d : " << d << " : loss of precision after 15 decimal bits" << std::endl;
    std::cout << "long double ld : " << ld << " : precision determined by compiler but at least precise up to 15 decimal bits" << std::endl;
    std::cout << "double fd : " << fd << " : truncated to floating point acccuracy because of f delimiter in assignment" << std::endl;
    std::cout << "long double ld2 : " << ld2 << " : truncated to double accuracy because missing L delimiter in assignment" << std::endl;
    std::cout << "\n------------------------------------\n";

    /*
        We can use scientific notation to represent very large or very small numbers in c++
        e.g. 192400023 can be represented in the following ways
        1.92400023e8
        e8 at the end means multiple the number before it by 10^8 (i.e. move the decimal point 8 places to the right)
        0.00000000003498 can be represented in the following way
        3.498e-11
        e-11 means multiply the number by -10^11 (i.e move the decimal point 11 places to the left)
        storing doubles using scientific notation reduces the number of bits nessecary to store the value in RAM
    */
    double sci1 {192400023};
    double sci2 {1.92400023e8};
    double sci3 {1924e8};
    double sci4 {0.00000000003498};
    double sci5 {3.498e-11};

    std::cout << std::endl;
    std::cout << "--------------------------\n";
    std::cout << "sci1 : " << sci1 << std::endl;
    std::cout << "sci2 : " << sci2 << std::endl;
    std::cout << "sci3 : " << sci3 << std::endl;
    std::cout << "sci4 : " << sci4 << std::endl;
    std::cout << "sci5 : " << sci5 << std::endl;

    /*
        We can divide doubles by 0 in C++
    */
    double x {123.456};
    double y {}; // init to 0
    double z {}; //

    double v { x / y };
    double w { y / z };

    std::cout << "\n-----------------\n";
    std::cout << "x : " << x << std::endl;
    std::cout << "y : " << y << std::endl;
    std::cout << "z : " << z << std::endl;
    std::cout << "x/y : " << v << std::endl;
    std::cout << "y/z : " << w << std::endl;
    std::cout << std::endl;
    return 0;
}