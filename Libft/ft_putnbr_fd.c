#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    int index;

    index = 0;
    if(nb < 0)
    {
        write(fd, '-', 1);
        nb *= (-1);
    }
    else if(nb >= 0 && nb <= 9)
    {
        nb += '0'; 
        write(fd, nb, 1);
    }
    else if(nb >= 10)
    {
        ft_putnbr_fd(nb / 10):
        write(fd, ((nb % 10) + '0'), 1):
    }
}