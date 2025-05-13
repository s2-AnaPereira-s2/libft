#include <stddef.h>
#include <stdio.h>

void *memchr(const void *s, int c, size_t n)
{
    const unsigned char *src = (const unsigned char *)s;

    while(n--)
    {
        if (*src == c)
            return (c);
        else
            *src++;
    }
    return (0);
}