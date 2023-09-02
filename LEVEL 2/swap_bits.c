// Assignment name  : swap_bits
// Expected files   : swap_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:

// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

// int	main(void)
// {
// 	printf("%u", swap_bits('1'));
// }

//(octet >> 4) shifts the bits of octet to the right by 4 positions.
// This moves the 4 most significant bits to the 4 least significant positions,
// and the vacant positions on the left are filled with zeroes.

//(octet << 4) shifts the bits of octet to the left by 4 positions.
// This moves the 4 least significant bits to the 4 most significant positions,
// and the vacant positions on the right are filled with zeroes.
