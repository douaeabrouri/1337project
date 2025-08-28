#include <stdio.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t index;

    if(dest > src)
    {
        index = 0;
        while(index < n)
        {
            ((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
            index++;
        }
    }
    else
    {
        index = n;
        while(index > 0)
        {
            ((unsigned char *)dest)[index] = ((unsigned char *)src)[index];
            index--;
        }
    }
    return(dest);
}

int main(void)
{
    char src[10] = "123456789";
    char dest[10];
    printf("%p\n", ft_memmove(dest, src, 9));
    printf("%s\n", dest);
}