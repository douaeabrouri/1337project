#include <stdio.h>
#include <string.h>

int ft_len(const char *str)
{
    int index;

    index = 0;
    while(str[index])
        index++;
    return (index);
}

int compare(const char *str, const char *found, size_t i)
{
    size_t index;

    index = 0;
    while(str[index])
    {
        if(str[i] != found[index])
            return (0);
        i++;
        index++;
    }
    return (1);
}

char    *ft_strnstr(const char *str, const char *found, size_t len)
{
    size_t index;

    if(*found == 0)
        return((char *)str);
    if(len < (size_t)ft_len(found))
        return (NULL);
    index = 0;
    while(str[index] && index <= len - ft_len(found))
    {
        if(compare(str, found, index) == 1)
            return ((char *)&str[index]);
        index++;
    }
    return (NULL);
}


int main(void){

    char str[20] = "hello world!";
    printf("%d\n", strnstr(str, "hello", 5));
}