#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    int i;

    substr = malloc((len + 1) * sizeof(char));
    start = 1;
    i = 0;
    while (len--)
    {
        substr[i++] = s[start++];
    }
    return (substr);
}

int main()
{
    char s[] = "This is";
    printf("%s", ft_substr(s, 6, 8));
}