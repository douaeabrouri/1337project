#include <ctype.h>
#include <stdio.h>

int ft_isalpha(int c)
{
    if((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
        return (1024);
    else
        return (0);
}

// int main(void)
// {
//     int c = 10;
//     //printf("isalpha = %d\n", isalpha(c));
//     printf("ft_isalpha = %d\n", ft_isalpha(c));
// }