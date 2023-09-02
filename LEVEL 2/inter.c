// Assignment name  : inter
// Expected files   : inter.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.

// The display will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Examples:

// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $

#include <unistd.h>

// without doubles, the characters that appear in both strings
int	check(char *str, char c, int p)
{
	int		i;

	i = 0;
	while (i < p)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

//Write a program that takes two strings
int	main(int argc, char **argv)
{
	int		a;
	int		b;

	a = 0;
	if (argc == 3)
	{
		while (argv[1][a])
		{
			b = 0;
			while (argv[2][b])
			{
				//If a matching character is found
				if (argv[1][a] == argv[2][b])
				{
					//check if the character already exists in argv[1] by calling the check,
					if (check(argv[1], argv[1][a], a) == 1)
//If the character is not already present, it is written to the standard output using the write() function.
						write(1, &argv[2][b], 1);
					break ;
				}
				b++;
			}
			a++;
		}
	}
	// If the number of arguments is not 2, the program displays \n.
	write(1, "\n", 1);
}
