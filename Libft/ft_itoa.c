#include <stdio.h>
#include <stdlib.h>

size_t len(char *str)
{
    int len;

    len = 0;
    while(str[len])
        len++;
    return (len);
}

char *reverse(char *str)
{
    int start;
    int end;

    start = 0;
    end = len(str) - 1;
    while(start <= end)
    {
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
    return (str);
}

char *ft_itoa(int n)
{
    int i;
    int neg;
    char *tmp;

    i = 0;
    neg = 0;
    tmp =(char *)malloc(sizeof(char) * 12);
    if(tmp == NULL)
        return (NULL);
    if(n == 0)
    {
        tmp[0] = '0';
        tmp[1] = '\0';
        return (tmp);
    }
    if(n == -2147483648)
    {
        char *max = "-2147483648";
        int index = 0;
        while(max[index])
        {
            tmp[index] = max[index];
            index++;
        }
        tmp[index]= '\0';
        return (tmp);
    }
    if(n < 0)
    {
        neg = 1;
        n *= (-1);
    }
    while(n)
    {
        tmp[i] = (n % 10) + '0';
        n /= 10;
        i++;
    }
    if(neg == 1){
        tmp[i] = '-';
        i++;
    }
    tmp[i] = '\0';
    return (reverse(tmp));
}

int main(void)
{
    int i = 0;
    
    printf("%s\n", ft_itoa(i));
}