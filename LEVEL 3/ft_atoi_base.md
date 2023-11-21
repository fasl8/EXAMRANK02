# ft_atoi_base

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| ft_atoi_base        | ft_atoi_base.c     | None             |

### write the code step by step:
* Write a function that converts the string argument str (base N <= 16) to an integer (base 10) and returns it.
* The characters recognized in the input are: 0123456789abcdef
* Those are, of course, to be trimmed according to the requested base. For example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".
* Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".
*  Minus signs ('-') are interpreted only if they are the first character of the string.
*  Your function must be declared as follows: ``` int	ft_atoi_base(const char *str, int str_base); ```

### write the code step by step:
1. function must be declared as follows: ``` int	ft_atoi_base(const char *str, int str_base); ```
2. Skip whitespaces and tabs
```
while(str[i] == ' ' || str[i] == '\t')
		i++;
```
3. Handle the sign (Minus signs ('-') are interpreted only if they are the first character of the string str[0])
```
if (str[0] == '-')
{
	sign = -1;
	i++;
}
else if (str[0] == '+')
	i++;
```

4.  determining whether the current character in the string is a valid character in the given base (up to base 16).
``` while (((str[i] >= '0' && str[i] <= '9') && (str_base <= 16)) || ((str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))) ```
* Numeric Digits (0-9): ``` (str[i] >= '0' && str[i] <= '9') ```
* base will always be less than or equal to 16: ``` && (str_base <= 16)) ```
* Alphabetic Characters (a-f and A-F): ``` || ((str[i] >= 'a' && str[i] <= 'f') || (str[i] >= 'A' && str[i] <= 'F'))) ```
5.  updated in each iteration to shift its digits to the left by a position, making room for the next digit to be added ``` nb = nb * str_base; ```
6.  Numeric Digits (0-9):converting a string to an integer value (subtracting the ASCII value of '0')
  ```
  if (str[i] >= '0' && str[i] <= '9')
	nb = nb + str[i] - '0';
  ```
