#include <stdlib.h>

typedef struct s_list
{
    void    *content;
    struct s_list   *next;
}   t_list;

t_list  *ft_lstnew(void *content)
{
    t_list  *tmp;

    tmp = (t_list *)malloc(sizeof(t_list) * 1);
    if (tmp == NULL)
        return (NULL);
    tmp -> content = content;
    tmp -> next = NULL;
    return (tmp);
}