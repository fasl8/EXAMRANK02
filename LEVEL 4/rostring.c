// Assignment name  : rostring
// Expected files   : rostring.c
// Allowed functions: write, malloc, free
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays this string after rotating it
// one word to the left.

// Thus, the first word becomes the last, and others stay in the same order.

// A "word" is defined as a part of a string delimited either by spaces/tabs, or
// by the start/end of the string.

// Words will be separated by only one space in the output.

// If there's less than one argument, the program displays \n.

// Example:

// $>./rostring "abc   " | cat -e
// abc$
// $>
// $>./rostring "Que la      lumiere soit et la lumiere fut"
// la lumiere soit et la lumiere fut Que
// $>
// $>./rostring "     AkjhZ zLKIJz , 23y"
// zLKIJz , 23y AkjhZ
// $>
// $>./rostring "first" "2" "11000000"
// first
// $>
// $>./rostring | cat -e
// $
// $>

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	flag;
	int	start;
	int	end;

	i = 0;
	flag = 0;
	if (argc > 1 && argv[1][0])
	{
		//Skipping Leading Spaces and Tabs:
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		//Finding the Start of the First Word:
		start = i;
		//Finding the End of the First Word
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
		end = i;
		//Skipping Trailing Spaces and Tabs After the First Word
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		//Printing Words:
		while (argv[1][i] != '\0')
		{
			//Handling Multiple Spaces:
			while ((argv[1][i] == ' ' && argv[1][i + 1] == ' ')
				|| (argv[1][i] == '\t' && argv[1][i + 1] == '\t'))
				i++;
			//Printing Non-Space Characters:
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flag = 1;
			else
			{
				if (flag)
					write(1, " ", 1);
				flag = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
		//Printing Last Word:
		if (flag)
			write(1, " ", 1);
		if (flag == 0)
			write(1, " ", 1);
		while (start < end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
}

