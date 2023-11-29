# sort_list

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| sort_list        | sort_list.c     |              |

### write the code step by step:
* Write the following functions: ``` t_list	*sort_list(t_list* lst, int (*cmp)(int, int)); ```
* This function must sort the list given as a parameter, using the function pointer cmp to select the order to apply, and returns a pointer to the  first element of the sorted list.
* Duplications must remain.
* Inputs will always be consistent.
* You must use the type t_list described in the file list.h that is provided to you. You must include that file ``` (#include "list.h") ```, but you must not turn it in. We will use our own to compile your assignment.
```
typedef struct s_list t_list;
struct s_list
{
  int     data;
  t_list  *next;
};
```
* Functions passed as cmp will always return a value different from 0 if a and b are in the right order, 0 otherwise.
* For example, the following function used as cmp will sort the list in ascending order:
```
int ascending(int a, int b)
{
    return (a <= b);
}
```

1. Write the following functions: ``` t_list	*sort_list(t_list* lst, int (*cmp)(int, int)); ```
2. swap to hold the value during swapping: `` int swap; ```
3. tmp to keep the original pointer to the list: ``` t_list *tmp; ``` -> to preserve the original list: ``` tmp = lst; ```
4. iterates through the list until the last element is reached: ``` while (lst->next) ```
5. checks if the elements need to be swapped based on the comparison function. If the comparison function returns 0 = not in the correct order: ``` if((*cmp) (lst->data, lst->next->data) == 0) ```
6. swap part:
```
swap = lst->data;
lst->data = lst->next->data;
lst->next->data = swap;
```
7. resets lst to the original list pointer if a swap occurred (ensures we start sorting from the beginning of the list again): ``` lst = tmp; ```
8. moves to the next element in the list if no swap is needed:
```
else
  lst = lst->next;
```
9. restores the original list pointer and returns it:
```
 lst = tmp;
    return (lst);
```
