
char	*ft_strlcpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
    if (n > 0)
    {
	    while (i <= n - 1)
	    {
	    	dest[i] = src[i];
	    	i++;
	    }
	    dest[i] = '\0';
    }
    i = 0;
    while(src[i] != '\0')
        i++;
	return (i);
}