#include <stdlib.h>
#include <stdio.h>

size_t len(char const *str)
{
    int index;

    index = 0;
    while(str[index])
        index++;
    return (index);
}
size_t nmb_words(char const *str, char c)
{
    size_t size;
    int index;
    int flag;

    index = 0;
    size = 0;
    flag = 0;
    while(str[index]) //"hello world" , ' '
    {
        if(str[index] != c && flag == 0)
        {
            size++;
            flag = 1;
        }
        else if(str[index] == c)
            flag == 0;
        index++;
    }
    return (size); 
}

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    int index;
    char **tmp;

    tmp = (char **)malloc(sizeof(char *) * len(s));
    index = 0;
    i = 0;
    while(s[index])
    {
        j = 0;
        printf("hi\n");
        if(s[index] != c) 
        {
            tmp[i][j] = s[index];
            j++;
        }
        else if(s[index] == c)
            i++;
        index++;
    }
    tmp[i][j] = '\0';
    return (tmp);
}

int main(void)
{
    // char **str = ft_split("hello world", ' ');
    // printf("%s\n", str[0]);
    // printf("%s\n", str[1]);
    printf("%ld\n", nmb_words("hello world hi", ' '));
}