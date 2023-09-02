/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faal-zub <faal-zub@student.42.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:16:57 by faal-zub          #+#    #+#             */
/*   Updated: 2023/08/29 20:06:00 by faal-zub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
// converts a string to an integer
int	ft_atoi(char *str)
{
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

int	is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
//returns 0 if the number is less than or equal to 1 
//or if it is divisible by any number between 2 and half of the number
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int		nb;
	int		sum;

	if (argc == 2)
	{
//argv[1] is converted to an integer using ft_atoi and stored in the variable nb.
		nb = ft_atoi(argv[1]);
		sum = 0;
		while (nb > 0)
//checks if it is prime using the is_prime function.
			if (is_prime(nb--))
//If it is prime, the number is added to the sum.
				sum += (nb + 1);
//sum is printed using the ft_putnbr function.
		ft_putnbr(sum);
	}
	if (argc != 2)
		ft_putnbr(0);
	write(1, "\n", 1);
	return (0);
}