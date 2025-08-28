#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
    int index;

    index  = 0;
    while(str[index])
    {
        if(str[index] == (unsigned char)c)
            return((char *) &str[index]);
        index++;
    }
    return NULL;
}
// int main(void)
// {
//     printf("%s\n", ft_strchr("aello", 'a'));
// }