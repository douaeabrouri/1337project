
typedef struct s_list
{
    void    *content;
    struct s_list   *next;
}   t_list;

int ft_lstsize(t_list *lst)
{
    int size;

    if(lst == NULL)
        return (NULL);
    size = 0;
    while(lst)
    {
        size++;
        lst = lst -> next;
    }
    return (size);
}