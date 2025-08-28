#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t index;

    index = 0;
    unsigned char *s = (unsigned char *)src;
    unsigned char *d = (unsigned char *)dest;
    while(index < n && s[index])
    {
        d[index] = s[index];
        index++;
    }
    return (d);
}

int main(void)
{
    int size = 7;
    char src[10] = "hello";
    char dest[10];
    printf("%p\n", ft_memcpy(dest, src, size));
    printf("%s\n", dest);
}