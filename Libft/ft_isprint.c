#include <ctype.h>
#include <stdio.h>

int ft_isprint(int c)
{
    if(c >= 0 && c <= 32)
        return (0);
    else   
        return (16384);
}

// int main(void)
// {
//     int c = 122;
//     printf("%d\n", isprint(c));
// }