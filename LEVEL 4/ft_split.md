# ft_split

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| ft_split        | ft_split.c     | malloc             |

### write the code step by step:
* Write a function that takes a string, splits it into words, and returns them as a NULL-terminated array of strings.
* A "word" is defined as a part of a string delimited either by spaces/tabs/new lines, or by the start/end of the string.
* Your function must be declared as follows: ``` char    **ft_split(char *str); ```

1. write a function that takes a string: ``` char    **ft_split(char *str); ```
2. allocating memory for the array of strings ``` split = (char **)malloc(sizeof(char *) * 256); ```
3. checking if the memory allocation for split was successful. If not, the function returns NULL:
```
if (!split)
	return (NULL);
```
4. skipping any leading spaces, tabs, or newlines in the input string:
```
while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n')
		a++;
```
5. iterates through the input string until the end is reached: ``` while (str[a]) ```
6. allocating memory for the current word in the split array ``` split[k] = (char *)malloc(sizeof(char) * 4096); ```
7. checking if the memory allocation for the current word was successful. If not, the function returns NULL
```
if (!split[k])
	return (NULL);
```
8. copying characters from the input string to the current word
```
while (str[a] && str[a] != ' ' && str[a] != '\t' && str[a] != '\n')
	split[k][b++] = str[a++];
```
9. skipping any trailing spaces, tabs, or newlines after the current word
```
while (str[a] == ' ' || str[a] == '\t' || str[a] == '\n')
	a++;
```
10. Adding the null terminator to the current word to make it a valid string: ``` split[k][b] = '\0'; ```
11. Incrementing the word count: ``` k++; ```
12. Adding a NULL pointer at the end of the split array to mark the end of the list of words: ``` split[k] = NULL; ```
13. Returning the array of strings: ``` return (split); ```
