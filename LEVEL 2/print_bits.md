# print_bits

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| print_bits        | print_bits.c     | write             |

### write the code step by step:
* Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE AT THE END.
* Your function must be declared as follows: ``` void	print_bits(unsigned char octet); ```
* Example, if you pass 2 to print_bits, it will print "00000010"

1. represent the 8 bits in unsigned char: ``` unsigned char	bit; ``` (represent each bit in the octet)
2. iterate through each bit in the octet: ``` i = 8; ```
3. iterates as long as i is not zero, decrements i in each iteration: ``` while (i--) ```
4. bit only 0 or 1, adding 0 give ascii value of corresponding char 0 or 1, >> used to shift the bits of the octet value to the right by i positions, bit converted to a character by adding to the ascii value '0': ``` bit = (octet >> i & 1) + '0'; ```
5. writing the character bit: ``` write(1, &bit, 1); ```
