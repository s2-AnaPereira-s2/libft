
char	ft_strrchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s)
		i++;
	while(i >= 0)
	{
		if (s[i] == c)
			return (s[i]);
		else
			i--;
	}
	return (0);
}