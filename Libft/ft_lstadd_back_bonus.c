
typedef struct  s_list{
    void *content;
    s_list *next;
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

void    ft_lstadd(t_list **lst, t_list *new)
{
    t_list *lst = last;
    if(lst)
    {
        if(*lst)
        {
            last = ft_lstlast(*lst);
            last -> next =  new;
        }
        else 
            (*lst) = new;
    }
}