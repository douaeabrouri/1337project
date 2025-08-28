#include <stdio.h>
#include <string.h>

size_t len(const char *src)
{
    size_t index;
    index = 0;
    while(src[index])
        index++;
    return (index);
}

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t index;

    index = 0;

    if (n <= 0)
        return(len(src));
    while(index < n - 1 && src[index] != 0)
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = 0;
    return (len(src));
}

int main(void)
{
    char src[10] = "world";
    char dest[10] = "hello";
    printf("%li\n", ft_strlcpy(dest, src, 5));
    printf("%s\n", dest);
}