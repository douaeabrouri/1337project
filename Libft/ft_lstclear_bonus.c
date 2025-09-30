
typedef struct s_list
{
    void    *content;
    s_list  *next;
}   t_list;

void    ft_lstdelone(t_list *lst, void (*del)(void *)del_content)
{
    if(!lst || !del)
        return ;
    del(lst->content);
    free(lst);
}

void    ft_lstclear(t_list  **lst, void(*del)(void*))
{
    t_list  *next;

    if(!lst || !del)
    {
        while(*lst)
        {
            next = (*lst) -> content;
			ft_lstdelone((*lst), del);
			(*lst) = next; 
        }
        (*lst) = next;
    }
}