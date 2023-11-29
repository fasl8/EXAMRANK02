// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.

// Your function must be declared as follows:

// void	print_bits(unsigned char octet);

// Example, if you pass 2 to print_bits, it will print "00000010"

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	bit;
	i = 8;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}
}

// int main(void)
// {
// 	print_bits(2);
// }
// 								01234567
// octet >> 7 shif it to the right 00000001
// octet >> 6 shif it to the right 00000010
// 2 / 2 = 1 and the reminder is 0
// 1 / 2 = 0.5 because ther is reminder is 1
