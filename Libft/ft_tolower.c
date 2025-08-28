#include <ctype.h>
#include <stdio.h>

int ft_tolower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return (c - ('A' - 'Z'));
    return (c);
}