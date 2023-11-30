# ft_list_remove_if

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| ft_list_remove_if        | ft_list_remove_if.c     | free             |

### write the code step by step:
* Write a function called ft_list_remove_if that removes from the passed list any element the data of which is "equal" to the reference data.
* It will be declared as follows : ``` void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)()); ```
* cmp takes two void* and returns 0 when both parameters are equal.
* You have to use the``` ft_list.h file ```, which will contain:
```
$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
     void            *data;
}                   t_list;
```

1. includes the header file "ft_list.h": #include "ft_list.h"
2. It will be declared as follows : ``` void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)()); ```
3. checks if the list is either NULL or an empty list:
```
if (begin_list == NULL || *begin_list == NULL)
		return;
```
4. create a local pointer cur that initially points to the first element of the linked list(used to traverse the linked list while keeping the original pointer *begin_list unchanged): ``` t_list *cur = *begin_list; ```
5. checks if the data of the current node is equal to the reference data using the comparison function: ``` if (cmp(cur->data, data_ref) == 0) ```
6. (if equal)updates the beginning of the list to skip the current node: ``` *begin_list = cur->next; ```
7. (if equal)frees the memory: ``` free(cur); ```
8. (if equal)calls the function to continue removing matching elements from the updated list: ``` ft_list_remove_if(begin_list, data_ref, cmp); ```
9. updates cur to the beginning of the list: ``` cur = *begin_list; ```
10. 
