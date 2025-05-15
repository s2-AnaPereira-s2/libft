/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:12:44 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/05/14 18:13:47 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

int	ft_total_words(char const *s, char c)
{
	int		total_words;
	int		i;

	i = 0;
	total_words = 0;
	if (s[0] != '\0' && s[0] != c)
		total_words++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
		{
			i++;
			total_words++; 
		}
		else
			i++;
	}
	return (total_words);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		start;
	int		end;
	int		index;

	split = ft_calloc(ft_total_words(s, c) + 1, sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	index = 0;
	while (s[i])
	{
		while (s[i] == c) 
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		split[index++] = ft_substr(s, start, end - start);
	}
	return (split);
}

