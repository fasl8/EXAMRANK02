# rev_wstr

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| rev_wstr        | rev_wstr.c     | write, malloc, free             |

### write the code step by step:
* Write a program that takes a string as a parameter, and prints its words in reverse order.
* A "word" is a part of the string bounded by spaces and/or tabs, or the begin/end of the string.
* If the number of parameters is different from 1, the program will display '\n'.
* In the parameters that are going to be tested, there won't be any "additional" spaces (meaning that there won't be additionnal spaces at the beginning or at the end of the string, and words will always be separated by exactly one space).

* 1. Write a program ``` int main(int argc, char **argv) ```
  2. Finding the End of the String:
     ```
     while(argv[1][i] != '\0')
			i++;
     ```
  3. Finding Words and Reversing Order: ``` while (i >= 0) ```
  4. Skipping White Spaces and Tabs: (A "word" is a part of the string bounded by spaces and/or tabs)
```
while (argv[1][i] == ' ' || argv[1][i] == '\0' || argv[1][i] == '\t')
				i--;
```
  5. Finding the End of a Word: ``` end = i; ```
  6. Finding the Start of the Word: (move background because we will work reverse last string to the first)
```
while (argv[1][i] != ' ' && argv[1][i] != '\0' && argv[1][i] != '\t')
    i--;
```
  7. point to the first character of the word, +1 move from the position of the space or tab before the word to the actual start of the word: ``` start = i + 1; ```
  8. remember the starting position of the current word(used to determine if a space should be printed between words): ``` flag = start; ```
  9. Reversing and Printing the Word:
  ```
  while (start <= end)
	{
			write(1, &argv[1][start], 1);
			start++;
	}
  ```
  10. Printing Space Between Words:
  ```
  if (flag != 0)
	{
		  write(1, " ", 1);
	}
  ```
  11. If the number of parameters is different from 1, the program will display '\n':
  ```
  if (argc == 2)
	{
  }
  write(1, "\n", 1);
  ```
