#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *p1 ,const void *p2, size_t size)
{
    const unsigned char *s1;
    const unsigned char *s2;

    s1 = (const unsigned char *)p1;
    s2 = (const unsigned char *)p2;
    while(size)
    {
        if(*s1 > *s2)
            return(*s1 - *s2);
        else if(*s1 < *s2)
            return(*s2 - *s1);
        p1++;
        p2++;
        size--;
    }
    return (0);
}

int main(void)
{
    char s1[10] = "hello";
    char s2[10] = "hil";
    printf("%d\n", memcmp(s1, s2, 5));
}