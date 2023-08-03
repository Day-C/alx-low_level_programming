				__ Bit_MAnipulation __


0. Write a function that converts a binary number to an unsigned int.

	Prototype: unsigned int binary_to_uint(const char *b);
	where b is pointing to a string of 0 and 1 chars
	Return: the converted number, or 0 if

1. Write a function that prints the binary representation of a number
	
	prototype: void print_binary(unsigned long int n);
	you are allowed to use arrays and malloc.
	you are not allowed to use the "%" or "/" operators.2.

2. Write a functioon that returns the balue of a bit at a given index
	prototype: int get_bit(unsigned long int n; unsigned int index);
	where index: is the string index starting from of the bit you want
	to get

3. Wtite a function that sets the value of a bit at a given index to 1
	Prototype: int set_bit(unsigned long int *n, unsigned int index);
	where index is the index, starting from 0 of the bit you want to set
	Returns: 1 if it worked, or -1 if an error occurred

4. writea functio that set the value of a bit tp 0 at a given index
	where index is the index, starting from 0 of the bit you want to set
	Returns: 1 if it worked, or -1 if an error occurred

5. write a function that returns the number of bits you will need to flip to get from one number to another.
	Prototype: unsigned int flip_bits(unsigned long int n, unsigned long 		int m);
	You are not allowed to use the % or / operators

6. Write a function that checks the endianness.

	Prototype: int get_endianness(void);
	Returns: 0 if big endian, 1 if little endian

7. Find the password for this program.

	Save the password in the file 101-password
	Your file should contain the exact password, no new line, no extra 
	spaec
