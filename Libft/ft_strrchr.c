#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *str, int c)
{
    int counter;
    int index;

    counter = 0;
    index = 0;
    while(str[index])
    {
        if(str[index] == (unsigned char)c)
            counter = index;
        index++;
    }
    if(counter != 0)
        return ((char *)&str[counter]);
    return NULL;
}

int main(void)
{
    printf("%s\n", ft_strrchr("hello", 'l'));
}