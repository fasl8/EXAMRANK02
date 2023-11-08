# first_ word

| Assignment name | Expected files | llowed functions |
| --------------- | -------------  | ---------------- |
| first_word      | first_word.c   | write            |

### write the code step by step:
* Write a program that takes a string and displays its first word, followed by a newline.
* A word is a section of string delimited by spaces/tabs or by the start/end of the string.
* If the number of parameters is not 1, or if there are no words, simply display a newline.

1. write a program that takes a string: ``` int main(int argc, char **argv) ```
2. displays its first word:
  ```
  while (argv[1][i] == ' ' || argv[1][i] == '\t')
      i++;
  while (argv[1][i] != ' ' && argv[1][i] != '\t' && argv[1][i])
  {
      write(1, &argv[1][i], 1);
      i++;
  }
  ```
3. If the number of parameters is not 1, or if there are no words. display a newline:
```
  if (argc == 2)
  {
  }
  write(1, "\n", 1);
}
```
  
    
