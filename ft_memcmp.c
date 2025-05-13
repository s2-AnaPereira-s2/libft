#include <stddef.h>
#include <stdio.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *a = (const unsigned char *)s1;
    const unsigned char *b = (const unsigned char *)s2;

    while (n--)
    {
        if (*a != *b)
            return (*a - *b);
        a++;
        b++;
    }

    return 0;
}
