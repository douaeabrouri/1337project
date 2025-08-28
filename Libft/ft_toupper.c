#include <ctype.h>
#include <stdio.h>

int ft_toupper(int nb)
{
    if(nb >=  97 && nb <= 122)
        return(nb - 32);
    return(nb);
}

int main(void)
{
    printf("%d\n", toupper(0));
}