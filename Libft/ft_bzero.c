#include <string.h>
#include <stdio.h>
#include <unistd.h>

void ft_bzero(void *str, size_t size)
{
    unsigned char *s;
    size_t index;

    s = (unsigned char *)str;
    index = 0;
    while(index < size)
    {
        s[index] = 0;
        index++;
    }
}

// int main(void)
// {
//     char str[11] = "helloworld";
//     printf("%s\n", str);
//     ft_bzero(str, 5);
//     int i = 0;
//     while(i)
//     {
//         write(1, &str[i], 1);
//         i++;
//     }
}