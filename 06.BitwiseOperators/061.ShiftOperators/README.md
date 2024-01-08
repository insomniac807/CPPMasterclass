# Bitwise Shift Operators

- Left shift or right shift operator moves every bit from a binary number one place either to the left or the right
- No wrap around functionality. i.e. if a left shift operation on an 4 bit number moves a 1 from the 8th position, off the number, the 1 is lost. 
- Any resulting gaps on the right of the number gets padded with zeros by default
- E.g. take the number 1010. a leftwise bitshift will result in the number 0100. 
- If we perform a rightwise bitshift on this resulting number, the lost 1 will not be recovered.
- I.e. after left shift we have the number 0100, and we now perform a rightwise bitshift, the resulting number will be 0010  
- In sequence this looks like:
- - 1010 << 0100 >> 0010