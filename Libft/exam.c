#include <stdio.h>

int found_nb(int nb)
{
    if(nb < 10)
        return nb;
    return((nb % 10) + found_nb(nb / 10));
}
// int valid_sum(int nbr)
// {
//     int sum = found_nb(nbr);
//     if(sum >= 10)
//         return valid_sum(sum);
//     return sum;
// }
int main(void)
{
    printf("%d\n", found_nb(1337));
}
