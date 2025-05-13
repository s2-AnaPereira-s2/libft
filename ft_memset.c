#include <stddef.h>
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