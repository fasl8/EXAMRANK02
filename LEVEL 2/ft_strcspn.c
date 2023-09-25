// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);

#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	a;
	int	b;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (reject[b] != '\0')
		{
			if (s[a] == reject[b])
				return (a);
			b++;
		}
		a++;
	}
	return (a);
}
