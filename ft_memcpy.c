#include <stddef.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *s;
    unsigned char *d;

    s = (unsigned char *)src;
    d = (unsigned char *)dest;

    while (n--)
    {
        *d++ = *s++;
    }

    return (dest);
}

int main() 
{
    char src[] = "Hello, World!";
    char dest[50];
    char *func;

    func = ft_memcpy(dest, src, sizeof(src));

    printf("%s", func);

    return 0;
}