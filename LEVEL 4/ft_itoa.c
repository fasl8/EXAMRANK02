// Assignment name  : ft_itoa
// Expected files   : ft_itoa.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes an int and converts it to a null-terminated string.
// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	int		n;
	int		len;
	char	*result;

	if (nbr == -2147483648)
		return ("-2147483648\0");
	n = nbr;
	len = 0;
	//to count the -
	if (nbr <= 0)
	{
		len++;
	}
	//to calcaluate the length
	while (n)
	{
		n /= 10;
		len++;
	}
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	//to write the -
	if (nbr < 0)
	{
		result[0] = '-';
		nbr = -nbr;
	}
	//write the number from the right to left (last to first)
	while (nbr)
	{
		result[--len] = nbr % 10 + '0';
		nbr /= 10;
	}
	return (result);
}

// int	main(int argc, char **argv)
// {
// 	printf("%s\n", ft_itoa(atoi(argv[1])));
// 	return (0);
// }
