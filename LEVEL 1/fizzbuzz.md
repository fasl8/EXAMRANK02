# fizzbuzz

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| fizzbuzz        | fizzbuzz.c     | write             |

### write the code step by step:
* Write a program that prints the numbers from 1 to 100, each separated by a newline.
* the number is a multiple of 3, it prints 'fizz' instead.
* If the number is a multiple of 5, it prints 'buzz' instead.
* If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

1. Write a program: ``` int main(void) ```
2. prints the numbers from 1 to 100, each separated by a newline:
```
    int i;

    i = 1;
    while (i <= 100)
    {
        i++;
        write(1, "\n", 1);
    }
}
```
- #include <unistd.h> : add header file for write function
3. the number is a multiple of 3, it prints 'fizz' instead:
```
       else if (i % 3 == 0)
            write(1, "fizz", 4);
``` 
4. If the number is a multiple of 5, it prints 'buzz' instead:
```
        else if (i % 5 == 0)
            write(1, "buzz", 4);
```
5. If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead:
```
        if (i % 3 == 0 && i % 5 == 0)
            write(1, "fizzbuzz", 8);
```
6. if the number not multiple of 3 or of 5, it prints the number:
```
        else
            write_number(i);
```
- make a function to write the number 
```
void write_number(int number)
{
    if (number > 9)
        write_number(number / 10);
    write(1, &"0123456789"[number % 10], 1);
}
```
