# add_prime_sum

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| add_prime_sum        | add_prime_sum.c     | write, exit             |

### write the code step by step:
* Write a program that takes a positive integer as argument and displays the sum of all prime numbers inferior or equal to it followed by a newline.
* If the number of arguments is not 1, or the argument is not a positive number, just display 0 followed by a newline.

1. write a program: ``` int	main(int argc, char **argv) ```
2. conver argv[1] to integer: ``` nb = ft_atoi(argv[1]); ```
3. continues as long as nb is greater than 0: ``` while (nb > 0) ```
4. Checks if the current value is prime: ``` if (is_prime(nb)) ``` -> If it is prime, its value is added to the sum: ``` sum += nb; ```
5. Decrements the value: ``` nb--; ```
6.  print the calculated sum: ``` ft_putnbr(sum); ```
7.  If the number of arguments is not 1, or the argument is not a positive number, just display 0 followed by a newline.
```
	if (argc == 2)
	{
	}
	else
		write(1, "0", 1);
	write(1, "\n", 1);
```

# conver argv[1] to integer using ft_atoi function:
1. function take string and return integer: ``` int	ft_atoi(char *str) ```
2. continues as long as the current character *str is not the null terminator ('\0'): ``` while (*str != '\0') ```
3. conversion of characters to an integer: ``` result = result * 10 + *str++ - '0'; ```
* multiplies the current result by 10 (shifting digits left) and adds the numeric value of the current character *str. The character is converted to its numeric value by subtracting the ASCII value of '0'.
4. Returns the final converted integer value: ``` return (result); ```

# Checks if the value is prime using is_prime function:
1. function take integer and return integer: ``` int	is_prime(int nb) ```
2. any number greater than 1 is not divisible by 1, we start checking for divisibility from the next smallest number, which is 2. ``` i = 2; ```
3. the argument is not a positive number, just display 0 followed by a newline. (number is not prime)
```
if (nb <= 1)
	return (0);
```
4. continues as long as the square of i is less than or equal to nb
