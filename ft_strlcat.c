
char	*ft_strlcat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
    if (n > 0)
    {
	    while (dest[i] != '\0')
	    	i++;
	    while (src[j] != '\0')
	    {
	    	dest[i] = src[j];
	    	i++;
	    	j++;
	    }
	    dest[i] = '\0';
    }
    i = 0;
    while(dest[i] != '\0')
        i++;
	return (i);
}