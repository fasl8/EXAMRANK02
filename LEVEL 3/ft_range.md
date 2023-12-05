# ft_range

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| ft_range        | ft_range.c     | malloc             |

### write the code step by step:
* Write the following function: ``` int     *ft_range(int start, int end); ```
* It must allocate (with malloc()) an array of integers, fill it with consecutive values that begin at start and end at end (Including start and end !), then return a pointer to the first value of the array.

1. Write the following function: ``` int     *ft_range(int start, int end); ```
2. len: represents the absolute difference between start and end ``` int len; ```
3. Determine the length of the range(size of the array that needs to be allocated to store the integers within the specified range):
   -  range is descending(ex: 5 - 2 = 3):
    ```
    if (start > end)
        len = start - end;
    ```
   -  range is ascending or has a single value (because the negative len (2 - 5 = -3) wrong)(ex: 5 - 2 = 3):
   ```
     else
        len = end - start;
   ```
5. 
