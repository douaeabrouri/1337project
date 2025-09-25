#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

int len(char const *s)
{
    int len;

    len = 0;
    while(s[len])
        len++;
    return (len);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int index;
    int len;
    char *tmp;

    if(s && f)
    {
        len = len(s) + 1;
        index = 0;
        tmp = (char *)malloc(sizeof(char) * len);
        if(tmp == NULL)
            return (NULL);
        index = 0;
        while(s[index])
        {
            tmp[index] = s[index];
            index++;
        }
        tmp[index] = '\0';
        return (tmp);
    }
    return (NULL);
}