#include <stdio.h>
#include <stdlib.h>

int len(const char *str)
{
    int index;

    index = 0;
    while(str[index])
        index++;
    return (index);
}

char *ft_strdup(char *string)
{
    char *tmp;
    int index;

    tmp = (char *)malloc(sizeof(char) * len(string));
    if(tmp == NULL)
    {
        return (NULL);
    }
    index = 0;
    while(len )
    {
        tmp[index] = string[index];
        index++;
    }
    tmp[index] = '\0';
    return (tmp);
}

int main(void)
{
    printf("%s\n",ft_strdup("oxo"));
}