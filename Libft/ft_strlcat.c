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

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t dest_len;
    size_t i;
    dest_len = ft_strlen(dest);
    if(size <= (size_t)dest_len + 1)
        return(size + ft_strlen(src));
    else if(size != dest_len + 1)
    {
        i = 0;
        while(dest[i])
            i++;
    }
    size_t j = 0;
    while(src[j] && j < size - (dest_len + 1))
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = 0;
    return(dest_len + ft_strlen(src));
}

int main(void)
{
    char src[10] = "hello";
    char dest[10] = "hi";
    printf("%li\n", ft_strlcat(dest, src, 1));
    printf("%s\n", dest);
} 