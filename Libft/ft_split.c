#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

size_t len(char const *str)
{
    int index;

    index = 0;
    while(str[index])
        index++;
    return (index);
}

char *ft_strdup(char const *string, int len)
{
    char *tmp;
    int index;

    tmp = (char *)malloc(sizeof(char) * (len + 1));
    if(tmp ==   NULL)
        return (NULL);
    index = 0;
    while(index < len)
    {
        tmp[index] = string[index];
        index++;
    }
    tmp[index] = '\0';
    return (tmp);
}


int count_word(char const *str, char c)
{
    int count_word;
    int index;
    int flag;

    index = 0;
    count_word = 0;
    flag = 0;
    while(str[index])
    {
        if(str[index] == c)
            flag = 0;
        else if(flag == 0)
        {
            flag = 1;
            count_word++;
        }
        index++;
    }
    return (count_word); 
}

char **ft_split(char const *s, char c)
{
    int i;
    int index;
    int nmb_word = count_word(s, c);
    char **tmp;

    tmp = (char **)malloc(sizeof(char *) * (nmb_word + 1));
    index = 0;
    i = 0;
    while(s[index])
    {
        while(s[index] == c && s[index])
            index++;
        char const *start = &s[index];
        int len = 0;
        while(s[index] != c && s[index])
        {
            // printf("hi\n");
            index++;
            len++;
        }
        if (len > 0)
        {
            tmp[i] = ft_strdup(start, len);
            i++;
        }
        //index++;
    }
    tmp[i]= NULL;
    return (tmp);
}

int main()
{
	char **words = ft_split("hello world 1 2", ' ');

	for (int i = 0; words[i]; i++)
	{
		write(1, words[i], len(words[i]));
		write(1, "\n", 1);
		free(words[i]);
	}
	free(words);
}