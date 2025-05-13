#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>


void *ft_memset(void *s, int c, size_t n)
{
	int i;
	unsigned char *a;

    a = (unsigned char *)s;
	if (n > 0)
	{
		i = 0;
		while (i <= n - 1)
		{
			a[i] = c;
			i++;
		}
	}
	else
		return (s);
	return (s);
}

void *ft_calloc(size_t nmemb, size_t size)
{   
    void* ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return (NULL);

    ft_memset(ptr, 0, nmemb * size);

    return (ptr);
}