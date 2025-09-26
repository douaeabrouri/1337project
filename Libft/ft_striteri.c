#include <stdio.h>
#include <stdlib.h>

// void f(unsigned int n, char *str)
// {
//     (void)n;
//     if(*str >= 'a' && *str <= 'z')
//         *str = *str - 'a' + 'A';
// }

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

// int main(void)
// {
//     char str[10] = "hi bae";
//     ft_striteri(str, (f));
//     printf("%s\n", str);
// }