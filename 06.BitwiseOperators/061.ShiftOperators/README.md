# Bitwise Shift Operators

- Left shift or right shift operator moves every bit from a binary number one place either to the left or the right
- No wrap around functionality. i.e. if a left shift operation on an 4 bit number moves a 1 from the 8th position, off the number, the 1 is lost. 
- Any resulting gaps on the right of the number gets padded with zeros by default
- E.g. take the number 1010. a leftwise bitshift will result in the number 0100. 
- If we perform a rightwise bitshift on this resulting number, the lost 1 will not be recovered.
- I.e. after left shift we have the number 0100, and we now perform a rightwise bitshift, the resulting number will be 0010  
- In sequence this looks like:
- - 1010 << 0100 >> 0010
- N.B. **BITSHIFTING ONLY SUPPORTED FOR INTEGRAL TYPES (I.E NOT FLOATING POINT NUMBERS)**
- Bitshifting only supported for 32 bit numbers minimum in C++
- If a bitshift operation is performed on a short int (16 bit), the compiler will first convert the short int to an int (32 bit) and then carry out the operation
- If we want the resulting number to remain a short int we must use **static_cast<>()** to convert the resulting 32 bit number to a 16 bit number
- We can bitshift more than 1 place at a time
- E.g. {int num {10}; auto result = num << 1;} is equally as valid syntactically as {int num {10}; auto result = num << 5;} 
- The former bitshifts 1 position to the left, and the latter 5 positions to the left

- The rule to determine the resulting integral after a bitshift operation is a follows
- Bitshift right divides by 2^n (i.e. a >> n = a / 2^n)
- Bitshift left multiplies by 2^n (i.e. a << n = a * 2^n)
- N.B. **THIS RULE BREAKS WHERE A 1 BIT GETS THROWN OFF EITHER THE LEFT OR RIGHT SIDE OF THE BINARY NUMBER**