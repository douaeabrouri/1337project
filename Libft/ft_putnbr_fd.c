#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
    char c;


    if (n == -2147483648)
    {
        write(fd, "-2147483648", 11);
        return;
    }

    if(nb < 0)
    {
        write(fd, '-', 1);
        nb *= (-1);
    }
    if(nb >= 0 && nb <= 9)
    {
        nb += '0'; 
        write(fd, nb, 1);
    }
    if(nb >= 10)
        ft_putnbr_fd(nb / 10);
    c = (nb % 10) + '0';
    write(fd, &c, 1);

}