#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2)
{
    char *ns;
    int i;
    int j;

    i = 0;
    while(s1[i] != '\0')
        i++;

    j = 0;
    while(s2[j] != '\0')
    {
        i++;
        j++;
    }
    ns = malloc((i + 1) * sizeof(char));
    i = 0;
    while(s1[i] != '\0')
        ns[i++] = s1[i];
    j = 0;
    while(s2[j] != '\0')
        ns[i++] = s2[j++];
    return (ns);
}
/*
int main()
{
    char *result;
    result = ft_strjoin("42", " Berlin");
    printf("%s", result);
    return (0);
}
*/