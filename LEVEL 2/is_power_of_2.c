// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that determines if a given number is a power of 2.

// This function returns 1 if the given number is a power of 2, otherwise it returns 0.

// Your function must be declared as follows:

// int	    is_power_of_2(unsigned int n);

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	if (n == 1)
		return (1);
	else
		return (0);
}

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
    return ((n & (n - 1)) == 0);
}
//A power of 2 in binary has only one bit set. 
//subtracting 1 from a power of 2, all bits to the right of the set bit turn to 1.
//Performing a bitwise AND operation (&) between the number and its decremented value will result in 0 for powers of 2

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d", is_power_of_2('4'));
// }

// 52(4) % 2 = 0

// 52 / 2 = 26

// 26 % 2 = 0

// 26 / 2 = 13

// 13 % 0 = error
// return 0
