// Assignment name  : wdmatch
// Expected files   : wdmatch.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and checks whether it's possible to
// write the first string with characters from the second string,
	// while respecting
// the order in which these characters appear in the second string.

// If it's possible, the program displays the string, followed by a \n,
	// otherwise
// it simply displays a \n.

// If the number of arguments is not 2, the program displays a \n.

// Examples:

// $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat
	// -e
// quarante deux$
// $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
// $
// $>./wdmatch | cat -e
// $

#include <unistd.h>

void ft_putstr(char *str)
{
	int i; 

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}
int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 3)
	{
		a = 0;
		b = 0;
		while (argv[2][b])
			if (argv[2][b++] == argv[1][a])
				a++;
		if (!argv[1][a])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}
