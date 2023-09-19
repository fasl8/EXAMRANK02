// Assignment name	: ft_strpbrk
// Expected files	: ft_strpbrk.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strpbrk
// (man strpbrk).

// The function should be prototyped as follows:

// char	*ft_strpbrk(const char *s1, const char *s2);

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *) s1);
			i++;
		}
		s1++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
//     const char *str1 = "Hello, World!";
//     const char *str2 = "aeiou";
//     char *result = ft_strpbrk(str1, str2);
//     printf("Found character '%c' at position %ld\n", *result, result - str1);
// }
