// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str != '\0')
		result = result * 10 + *str++ - '0';
	return (result);
}

int	is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int nbr)
{
	char	digit;

	if (nbr >= 10)
		ft_putnbr(nbr / 10);
	digit = nbr % 10 + '0';
	write(1, &digit, 1);
}

int	main(int argc, char **argv)
{
	int	nb;
	int	sum;

	if (argc == 2)
	{
		nb = ft_atoi(argv[1]);
		sum = 0;
		while (nb > 0)
		{
			if (is_prime(nb))
				sum += nb;
			nb--;
		}
		ft_putnbr(sum);
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
