
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