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

4. 
