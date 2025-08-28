#include <string.h>
#include <stdio.h>

void *ft_memset(void *str, int c, size_t n)
{

    size_t index;

    index = 0;
    unsigned char *s = (unsigned char *)str;
    while(index < n)
    {
        s[index] = (unsigned char)c;
        index++;
    }
    return (str);
}

int main(void)
{
    char str[20] = "hello world";
    printf("%p\n", ft_memset(str, 2, 4));
}