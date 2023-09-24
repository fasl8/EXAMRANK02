// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.

// Your function must be declared as follows:

// unsigned char	reverse_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0010  0110
// 	 ||
// 	 \/
//  0110  0100

unsigned char	reverse_bits(unsigned char octet)
{
	int				i;
	unsigned char	res;

	i = 8;
	res = 0;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

//`reverse_bits` function takes a byte as input and reverses it bit by bit.
//It initializes a variable `res` to 0, which will store the reversed bits.
//loop runs 8 times since a byte consists of 8 bits.
//In each iteration of the loop,
//  - Multiply `res` by 2 to shift the existing bits to the left.
//  - Add the least significant bit of the input byte (`octet`) to `res`.
//  - Update `octet` by dividing it by 2 to shift the bits to the right.
//  - Decrement the loop counter `i`.
//loop finishes,`res` will contain the reversed bits of the input byte.

// - Initialize a result variable to 0.
// - Iterate 8 times, for each bit in the byte.
// - Shift the existing bits in the result to the left by multiplying it by 2.
// - Add the least significant bit of the input byte to the result.
// - Shift the bits in the input byte to the right by dividing it by 2.
// - Return the result after the loop finishes.
