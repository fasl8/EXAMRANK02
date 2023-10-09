// Assignment name  : ft_split
// Expected files   : ft_split.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write a function that takes a string, splits it into words, and returns them as
// a NULL-terminated array of strings.

// A "word" is defined as a part of a string delimited either by spaces/tabs/new
// lines, or by the start/end of the string.

// Your function must be declared as follows:

// char    **ft_split(char *str);


#include <stdlib.h>

char    **ft_split(char *str)
{
	int		a;
	int		b;
	int		k;
	char	**split;

	a = 0;
	k = 0;
	split = (char **)malloc(sizeof(char *) * 256);
	if (!split)
		return (NULL);
	while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n')
		a++;
	while (str[a])
	{
		b = 0;
		split[k] = (char *)malloc(sizeof(char) * 4096);
		if (!split[k])
			return (NULL);
		while (str[a] && str[a] != ' ' && str[a] != '\t' && str[a] != '\n')
			split[k][b++] = str[a++];
		while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n')
			a++;
		split[k][b] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}

// #include <stdio.h>

// int main()
// {
//     char *str = "abc def";

//     char **result = ft_split(str);
//     int i = 0;
//     while (result[i] != NULL)
//     {
//         printf("[%s] ", result[i]);
//         i++;
//     }
//     printf("\n");
// }
