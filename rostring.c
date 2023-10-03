#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int flag = 0;
    int start;
    int end;
    char *s = av[1];

    if (ac > 1 && s[0])
    {
        while (s[i] == ' ' || s[i] == '\t')
            i++;
        start = i;

        while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t')
            i++;
        end = i;

        while (s[i] == ' ' || s[i] == '\t')
            i++;

        while (s[i] != '\0')
        {
            while ((s[i] == ' ' && s[i + 1] == ' ') || (s[i] == '\t' && s[i + 1] == '\t'))
                i++;
            if (s[i] == ' ' || s[i] == '\t')
                flag = 1;
            else
            {
                if (flag)
                    write(1, " ", 1);
                flag = 0;
                write(1, &s[i], 1);
            }
            i++;
        }
        if (flag)
            write(1, " ", 1);

        while (start < end)
        {
            write(1, &s[start], 1);
            start++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
