		===Bit_manipulation===

bit manipulation is the process of manipulating the bits of a piece of data, or pieces of data stored in bytes.

Bit manipulation is caried ut using bit operators which are 
	 
	AND operator (&)
	OR operator (|)
	XOR operator (^)
	NOT operator (~)
	Left_Shift operator (<<)
	Right_Shift operator (>>)

This directory will containn programs that make use of the bitwise operators.

	__Tasks__
0). The first problem is a to write a function that converts a binary input into a decimal number.
	.The prototype of the function will be "unsigned int binary_to_uint(const char *b)"
	.Where 'b' is the binary number(pointer to a string of "0s, and 1s".

1).  The second task  is to write a program that returns the binary representation of a number	
	.The prototype for the function is "void print_binary(unsined long int n)"
	.Where 'n' is the decimal number out program will convert to binary

2).  The third task is to write a program that returns the value of a bit at given index
	.The prototype "int get_bin(unsigned long int n, unsigned int index)"
	.Where 'n' is the decimal number and 'index' is the index of the binary number

3).  The third program is to set the value of a bit to '1' at a given index
	.The prototype "int set_bit(unsigned long int *n. unsigned int index)"
	.Where 'n' is a pointer to a decimal number and 'index' is the index to be set

4).  The fouth program is  to set the value of a bit at an index to 0
	.The prototype "int clear_bit(unsinged long int *n, unsigned int index)"
	.Where 'n'is a decimal number and 'index' is the index of the binary number to flip

