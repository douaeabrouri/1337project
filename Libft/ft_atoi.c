#include <stdio.h>
#include <string.h>

int ft_atoi(const char *string)
{
    int index;
    int sign;
    unsigned long long nb;

    index = 0;
    while((string[index] == 9 && string[index] == 13 )|| string[index] == 32)
        index++;
    sign = 1;
    while(string[index] == '-' || string[index] == '+')
    {
        if(string[index] == '-')
            sign = -1;
        index++;
    }
    nb = 0;
    while((string[index] >= '0' && string[index] <= '9') && string[index] != 0)
    {
        nb *= 10;
        nb += (string[index] - '0');
        index++;
    }
    return ((int)nb*sign);
}

int main(void)
{
    printf("%d\n", ft_atoi("---------+++++12345avgdj"));
}