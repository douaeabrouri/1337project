#include <stdlib.h>

typedef struct s_list
{
    void *content;
    s_list  *next;
}   t_list;

// t_list  *ft_lstmap(t_list   *lst, void  *(*f)(void *), void(*del)(void *))
// {
//     t_list *tmp;

//     tmp = (t_list *)malloc(sizeof(t_list));
//     if(tmp == NULL)
//         return (NULL);
//     while(lst)
//     {
//         tmp
//     }
// }