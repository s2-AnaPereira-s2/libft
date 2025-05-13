#include <stddef.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *s;
    unsigned char *d;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;

    if (d < s)
    {
        while (n--)
            *d++ = *s++;
    }
    else
    {
        d += n;
        s += n;
        while (n--) 
            *--d = *--s;
    }
    return (dest);
}

#include <stdio.h>
#include <string.h>

int main(void) 
{
    char dest[] = "The quick black fox jumps over the lazy dog. Destination fucked"; 
    char source[] = "The quick brown fox jumps over the lazy dog.";

    printf("%s", ft_memmove(dest, source, 15));
}


