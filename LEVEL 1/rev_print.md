# rev_print 

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| rev_print      | rev_print.c   | write             |

### write the code step by step:
* Write a program that takes a string, and displays the string in reverse followed by a newline.
* If the number of parameters is not 1, the program displays a newline.

1. Write a program: ``` int main(int argc, char **argv) ```
2. displays the string in reverse:
   - calculate the string length
   - write it using variablr i and decreas it to move from the end to start
```
        while (argv[1][i])
            i++;
        while(i--)
            write(1, &argv[1][i], 1);
```
3. If the number of parameters is not 1, the program displays a newline:
```
  if (argc == 2)
  {
  }
  write(1, "\n", 1);
}
