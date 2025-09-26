#include <stdio.h>
#include <stdlib.h>



void    ft_striteri(char *s, void (*f)(unsigned int n, char *str))
{
    unsigned int   i;

    i = 0;
    if(s && f)
    {
        while(s[i])
        {
            f(i, &s[i]);
            i++;
        }
    }
}