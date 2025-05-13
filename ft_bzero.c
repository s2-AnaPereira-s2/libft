#include <stddef.h>

void bzero(void *s, size_t n)
{
    int i;
	unsigned char *a;

    a = (unsigned char *)s;
	if (n > 0)
	{
		i = 0;
		while (i <= n - 1)
		{
			a[i] = '\0';
			i++;
		}
	}
}