# last_word

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| last_word        | last_word.c     | write             |

### write the code step by step:
* Write a program that takes a string and displays its last word followed by a \n.
* A word is a section of string delimited by spaces/tabs or by the start/end of the string.
* If the number of parameters is not 1, or there are no words, display a newline.

1. Write a program: ``` int main(int argc, char **argv) ```
2. iterates through the characters of the second command line argument: ``` while (argv[1][i]) ```
3. If a space is found and the next character is within the ASCII range 33 to 126 ``` if (argv[1][i] == ' ' && argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126) ``` (represent printable characters, excluding space.) -> add index of the next character after the space ``` j++; ``` . (to mark the beginning of the last word in the string.) -> ``` i++; ``` .
4. printing the last word in the string, excluding any non-printable characters:
   ```
   while (argv[1][j] >= 33 && argv[1][j] <= 127)
   {
        write(1, &argv[1][j], 1);
        j++;
   }
   ```
5. If the number of parameters is not 1, or there are no words, display a newline:
   ```
   if (argc == 2)
   {
   }
   write(1, "\n", 1);
   ```
