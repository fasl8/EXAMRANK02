# repeat_alpha

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| repeat_alpha     | repeat_alpha.c   | write             |

### write the code step by step:
* Write a program called repeat_alpha that takes a string and display it repeating each alphabetical character as many times as its alphabetical index,followed by a newline.
* 'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...
* Case remains unchanged.
* If the number of arguments is not 1, just display a newline.

1. Write a program: ``` int main(int argc, char **argv) ```
2. each alphabetical character as many times as its alphabetical index:
   - calculate way: re + argv[1][i] - 'a' -> 1 + 97 - 97 = 1
   - re + argv[1][i] - 'a' = 1 + 98 - 97 = 2
   - after calculate write the alpha acording to re variable
```
while (argv[1][i])
        {
            re = 1;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                re += argv[1][i] - 'a';
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                re += argv[1][i] - 'A';
            while(re--)
                write(1, &argv[1][i], 1);
            i++;
        }
```
3. If the number of arguments is not 1, just display a newline.:
```
  if (argc == 2)
  {
  }
  write(1, "\n", 1);
}
```
