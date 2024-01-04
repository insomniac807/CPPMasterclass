# Decimals & Integers

### Integers
- 4 Bytes in RAM (32 bits)
- Signed by default (i.e. can contain positive or negative numbers)
- Can be modified to use more or less bytes in RAM OR to increase the range of possible positive values
- unsigned keyword modifier disables negative value possibilities and allocates full 32 bit range for positive whole numbers
- short keyword modifier allocates 2 bytes of RAM for int instead of 4. Can be used with signed or unsigned ints
- long keyword modifier allocates 4 OR 8 bytes of RAM for signed or unsigned ints depending on value
- long long keyword modifier allocates 8 bytes (64 bits) or RAM for signed or unsigned ints

### Fractions/Decimal Point Numbers
- 3 types
- float, double, long double
- float = 4 bytes of memory and has a precision of 7 decimal bits
- double = 8 bytes of memory and has a precision of 15 decimal bits (can be compiler dependant). It is the recommended default type for fractional numbers
- long double = 12 bytes of memory. Has at least the same precision as double or possibly greater decimal bit precision than double but the exact value of precision depends on the compiler implementation