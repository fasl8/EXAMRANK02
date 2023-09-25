// You must use the following structure, and turn it in as a file called
// ft_list.h:

#ifndef FT_LIST_H
# define FT_LIST_H

typedef	struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;

#endif