#include <stdio.h>
#include <stdlib.h>

int len(char const *str)
{
    int index;

    index = 0;
    while(str[index])
        index++;
    return (index);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    char *tmp;
    int lenght;
    int index;
    int index2;

    lenght = len(s1) + len(s2);
    tmp = (char *)malloc(sizeof(char) * lenght);
    if(tmp == NULL)
        return (NULL);
    index = 0;
    while(s1[index])
    {
        tmp[index] = s1[index];
        index++;
    }
    index2 = 0;
    while(s2[index2])
    {
        tmp[index] = s2[index2];
        index++;
        index2++;
    }
    tmp[index] = '\0';
    return (tmp);
}

int main(void)
{
    printf("%s\n", ft_strjoin("hello", "world"));
}