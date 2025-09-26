#include <unistd.h>

void    ft_putstr_fd(char *s, int fd)
{
    int index;

    if (fd >= 0)
    {
        index = 0;
        while(s[index])
        {
            write(fd, &s[index], 1);
            index++;
        }
    }
}