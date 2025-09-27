

typedef struct s_list
{
    void *content;
    s_list  *next;
}   t_list;

t_list  *ft_lstlast(t_list  *lst)
{
    if(lst == NULL)
        return (NULL);
    while(lst -> next)
    {
        lst  = lst -> next;
    }
    return (lst);
}