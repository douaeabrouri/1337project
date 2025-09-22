#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int len(char const *str)
{
    int index ;

    index = 0;
    while(str[index])
        index++;
    return (index);
}

int check(char c , char const *set)
{
    int index;

    index = 0;
    while(set[index])
    {
        if(set[index] != c)
            index++;
        else    
            return (0);
    }
    return (1);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int index;
    int i;
    char *tmp;


    if(!s1 || !set)
        return (NULL);
    index = 0;
    i = 0;
    tmp = (char *)malloc(sizeof(char) * len(s1));
    if(tmp == NULL)
        return (NULL);
    int start = 0;
    while(check(s1[index], set) == 0)
    {
        index++;
    }
    start = index;
    int j = len(s1) -  1;
    int end = 0;
    while(check(s1[j], set) == 0)
    {
        j--; 
    }
    end = j + 1;
    while(start < end)
    {
        tmp[i] = s1[start];
        i++;
        start++;
    }
    tmp[i] = 0;
    return (tmp);
}

int main(void)
{
    printf("%s\n", ft_strtrim("...Hello...World....", "."));
}