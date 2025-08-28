#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *str, int n, size_t size)
{
    const unsigned char *p;
    unsigned char c;
    
    p = (const unsigned char *)str;
    c = (unsigned char)n;
    while(size)
    {
        if(*p == c)
            return((void *)p);
        p++;
        size--;
    }
    return(NULL);
}

int main(void)
{
    char *str = "hello";

    printf("%p\n", ft_memchr(str, 'o', 3));
}