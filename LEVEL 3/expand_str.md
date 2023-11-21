# expand_str

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| expand_str        | expand_str.c     | write             |

### write the code step by step:
* Write a program that takes a string and displays it with exactly three spaces between each word, with no spaces or tabs either at the beginning or the end, followed by a newline.
* A word is a section of string delimited either by spaces/tabs, or by the start/end of the string.
* If the number of parameters is not 1, or if there are no words, simply display a newline.

1. Write a program: ``` int main(int argc, char const **argv) ```
2.  Skip leading spaces or tabs:
```
while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
```
3. Set flag to 1 if space or tab is encountered
```
if (argv[1][i] == ' ' || argv[1][i] == '\t')
    flag = 1;
```
4. Check if the character is not space or tab: ``` if (argv[1][i] != ' ' && argv[1][i] != '\t')) ```
5. Insert three spaces between words if flag is set(displays it with exactly three spaces between each word)
```
                if (flag)
                    write(1, "   ", 3);
```
6. Reset the flag: ``` flag = 0; ```
7. Write the character to the standard output: ``` write(1, &argv[1][i], 1); ```
