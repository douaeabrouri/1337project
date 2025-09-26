#include <unistd.h>

void    ft_putendl_fd(char *s, int fd)
{
    int index;

    if(fd >= 0 && s)
    {
        index = 0;
        while(s[index])
        {
            write(fd, &s[index], 1);
            index++;
        }
        write(fd, '\n', 1);
    }
}