
char *ft_strnstr(char *big, char *little, int len)
{
	int	i;
	int	j;

	i = 0;
	while (big[i] != '\0')
	{
		j = 0;
		while (little[j] <= len - 1)
		{
			if (big[i + j] == little[j])
			{
				j++;
			}
			else
				break ;
		}
		if (little[j] == '\0')
			return (&big[i]);
		i++;
	}
	return (0);
}