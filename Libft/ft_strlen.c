#include <stdio.h>
#include <string.h>

int ft_strlen(const char *str)
{
    int len;

    len = 0;
    while(str[len])
    {
        len++;
    }
    return (len);
}

// int main(void)
// {
//     char str[10] = "0123456789";
//     printf("%d\n", ft_strlen(str));
// }