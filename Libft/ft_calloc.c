#include <stdio.h>
#include <stlib.h>

void ft_bzero(void *str, size_t size)
{
    unsigned char *s;
    size_t index;

    s = (unsigned char *)str;
    index = 0;
    while(index < size)
    {
        s[index] = 0;
        index++;
    }
}

void *ft_calloc(size_t nmb, size_t size)
{
    void *tmp;
    
    tmp = malloc(size * nmb + 1);
    if(tmp == NULL)
        return(NULL);
    ft_bzero(tmp, nmb * size);
    return(tmp);
}