#include<header.md>

/**readme file for project 0x14-bit_manipulation
*what i will doing
*6 tasks and 2 advanced 
*/

#START

0. 0
I will Writing a function that converts a binary number to an unsigned int
Prototype: unsigned int binary_to_uint(const char *b);
where b is pointing to a string of 0 and 1 chars
Return: the converted number, or 0 if
there is one or more chars in the string b that is not 0 or 1
b is NULL

1. 1
I will Writing a function that prints the binary representation of a number
Prototype: void print_binary(unsigned long int n);
Format: see example
You are not allowed to use arrays
You are not allowed to use malloc
You are not allowed to use the % or / operators

2. 10
I will Writing a function that returns the value of a bit at a given index
Prototype: int get_bit(unsigned long int n, unsigned int index);
where index is the index, starting from 0 of the bit you want to get
Returns: the value of the bit at index index or -1 if an error occured

3. 11
I will Writing a function that sets the value of a bit to 1 at a given index
Prototype: int set_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred

4. 100
mandatory
I will Writing a function that sets the value of a bit to 0 at a given index
Prototype: int clear_bit(unsigned long int *n, unsigned int index);
where index is the index, starting from 0 of the bit you want to set
Returns: 1 if it worked, or -1 if an error occurred

5. 101
I will Writing a function that returns the number of bits you would need to flip to get from one number to another
Prototype: unsigned int flip_bits(unsigned long int n, unsigned long int m);
You are not allowed to use the % or / operators

6. Endianness
#advanced
I will Writing a function that checks the endianness
Prototype: int get_endianness(void);
Returns: 0 if big endian, 1 if little endian

7. Crackme3
#advanced
I will Finding the password for this program
and Saving the password in the file 101-password
Your file should contain the exact password, no new line, no extra space



#END
