#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    int i;

    substr = malloc((len + 1) * sizeof(char));
    i = 0;
    while (len--)
    {
        substr[i] = s[start];
        i++;
        start++;
    }
    substr[i] = '\0';
    return (substr);
}

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

char **ft_split(char const *s, char c)
{
    char **split;

    int i;
    int j;
    int len;
    int *indexes;
    int nmemb;

    i = 0;
    j = 0;
    indexes = malloc(12 * sizeof(int));
    while(s[i] != '\0')
    {
        if(s[i] == c)
        {
            indexes[j] = i;
            i++;
            j++; 
        }
        else
            i++;
    }
    split = ft_calloc(j, sizeof(int));
    i = 1;
    len = 0;
    split[0] = ft_substr(s, 0, (indexes[0] + 1));
    while (i <= j)
    {
        len = (indexes[i] - indexes[i - 1]);
        split[i] = ft_substr(s, ((indexes[i] - len) + 1), len);
        i++;
        j--;
    }
    i = 0;
    while(split[i] != '\0')
    {
      j = 0;
      while(split[i][j] != '\0')
      {
        printf("%c", split[i][j]);
        j++;
      }
      i++;
      printf("%c", ',');
    }
    return (0);
}

int main()
{
    ft_split("Ana Paula dos Santos Pereira", 'a');
}
