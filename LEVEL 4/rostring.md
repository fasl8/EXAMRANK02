# rostring

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| rostring        | rostring.c     | write, malloc, free             |

### write the code step by step:
* Write a program that takes a string and displays this string after rotating it one word to the left.
* the first word becomes the last, and others stay in the same order.
* A "word" is defined as a part of a string delimited either by spaces/tabs, or by the start/end of the string.
* Words will be separated by only one space in the output.
* If there's less than one argument, the program displays \n.

1. Write a program that takes a string: ``` int	main(int argc, char **argv) ```
2. the first word becomes the last, and others stay in the same order:
	1. skipping any leading spaces or tabs in the input string and then setting the start variable to the index where the first word begins.
	```
 	while (argv[1][i] != '\0' && (argv[1][i] == ' ' || argv[1][i] == '\t'))
		i++;
	start = i;
 	```
   	2.  Print the first word (which is now the last)
	```
 	while (argv[1][start] != '\0' && argv[1][start] != ' ' && argv[1][i] != '\t')
	{
		write(1, &argv[1][start], 1);
		start++;
	}
 	```
3. f
4. f
5. f
6. If there's less than one argument, the program displays \n:
```
if (argc >= 2)
{
}
write(1, "\n", 1);
```
