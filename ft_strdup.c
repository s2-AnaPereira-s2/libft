#include <stddef.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    char    *src_c;
    int i;

    i = 0;
    while (src[i] != '\0')
        i++;
    
    src_c = (char *)malloc((i + 1) * sizeof(char));
    i = 0;
    while (src[i] != '\0')
    {
        src_c[i] = src[i];
        i++;
    }
    src_c[i] = '\0';

    if (!src_c)
        return (NULL);
        
    return (src_c);
}