# fprime

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| fprime        | fprime.c     | printf, atoi             |

### write the code step by step:
* Write a program that takes a positive int and displays its prime factors on the standard output, followed by a newline.
* Factors must be displayed in ascending order and separated by '*', so that the expression in the output gives the right result.
* If the number of parameters is not 1, simply display a newline.
* The input, when there is one, will be valid.

  1. Write a program: ``` int main(int argc, char **argv) ```
  2. Convert the argument to an integer: ``` number = atoi(argv[1]); ```
  3. The input, when there is one, will be valid
```
if (number == 1)
    printf("1");
```
  4.  find prime factors of the given number ``` while (number > i++) ```
     * Check if i is a factor of the number ``` if (number % i == 0) ```
     * Print the factor ``` printf("%d", i); ```
     * Check if the factor is the last one
      ```
      if (number == i)
             break;
      ```
     * Print '*' to separate factors ``` printf("*"); ```
     * Reduce the original number by dividing it by the factor ``` number /= i; ```
     * Reset the factor counter to 1 ``` i = 1; ```
  5.  If the number of parameters is not 1, simply display a newline: ``` printf("\n"); ```
