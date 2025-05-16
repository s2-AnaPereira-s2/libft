/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:13:44 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/05/16 14:56:13 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s)
		i++;
	while(i >= 0)
	{
		if (s[i] == c)
			return (char *)&s[i];
		else
			i--;
	}
	return((char *)s);
}