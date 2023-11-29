# ft_itoa

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| ft_itoa        | ft_itoa.c     | malloc             |

### write the code step by step:
* Write a function that takes an int and converts it to a null-terminated string.
* The function returns the result in a char array that you must allocate.
* Your function must be declared as follows: ``` char	*ft_itoa(int nbr); ```

1. Your function must be declared as follows: ``` char	*ft_itoa(int nbr); ```
2. minimum integer value:
```
if (nbr == -2147483648)
		return ("-2147483648\0");
```
3. keep a copy of the absolute value of nbr: ``` n = nbr; ```
4. keep track of the length of the resulting string: ``` len = 0; ```
5. count for the negative sign in the resulting string:
```
if (nbr <= 0)
{
		len++;
}
```
6. calculate the length of the resulting string
```
while (n)
{
		n /= 10;
		len++;
}
```
7. allocates memory for the resulting string: ``` 
7. 
