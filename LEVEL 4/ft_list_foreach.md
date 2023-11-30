# ft_list_foreach

| Assignment name | Expected files | Allowed functions |
| --------------- | -------------  | ----------------- |
| ft_list_foreach        | ft_list_foreach.c, ft_list.h     | write             |

### write the code step by step:
* Write a function that takes a list and a function pointer, and applies this function to each element of the list.
* It must be declared as follows: ``` void    ft_list_foreach(t_list *begin_list, void (*f)(void *)); ```
* The function pointed to by f will be used as follows: ``` (*f)(list_ptr->data); ```
* You must use the following structure, and turn it in as a file called ``` ft_list.h ``` :
```
typedef struct    s_list
{
     struct s_list *next;
     void          *data;
}                 t_list;
```
1. includes the header file "ft_list.h": ``` #include "ft_list.h" ```
2. It must be declared as follows: ``` void    ft_list_foreach(t_list *begin_list, void (*f)(void *)); ```
3. traverse the linked list: ``` t_list *list_ptr; ``` -> initialized with the address of the first element of the linked list: ``` list_ptr = begin_list; ```
4. iterates through each element of the linked list: ``` while (list_ptr) ```
5. the function pointed to by f will be used as follows: ``` (*f)(list_ptr->data); ```
6. moves to the next node in the list: ``` list_ptr = list_ptr->next; ```
