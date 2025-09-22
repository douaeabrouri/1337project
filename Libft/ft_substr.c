#include <stdlib.h>
#include <stdio.h>

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *tmp;
    size_t index;

    index = 0;
    tmp = (char *)malloc(sizeof(char) * len);
    if(tmp == NULL || start > len)
        return (NULL);
    while(index < len && s[index])
    {

        tmp[index] = s[start];
        start++;
        index++;
    }
    tmp = NULL;
    return (tmp);
}

int main(void)
{
    char s[100] = "hello world";
    printf("%s\n", ft_substr(s, 2, 10));
}