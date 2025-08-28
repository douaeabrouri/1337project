#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int index;

    index = 0;
    while(((unsigned char)s1[index] || (unsigned char )s2[index]) && index < n)
    {
        if((unsigned char)s1[index] != (unsigned char)s2[index])
            return ((unsigned char)s1[index] - (unsigned char)s2[index]);
        index++;
    }
    return (0);
}
int main(void)
{
    const char s2[10] = "hello";
    const char s1[10] = "hi";
    printf("%d\n", ft_strncmp(s1, s2, 4));
}