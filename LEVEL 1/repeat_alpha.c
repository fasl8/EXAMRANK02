#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int re;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			re = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				re += argv[1][i] - 'a';
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				re += argv[1][i] - 'A';
			while (re--)
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
