/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:13:16 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/05/16 19:47:31 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stddef.h>


size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
    if (size > 0)
    {
	    while (i <= size - 1)
	    {
	    	dst[i] = src[i];
	    	i++;
	    }
    }
	dst[i] = '\0';
    i = 0;
    while(src[i] != '\0')
	{
		i++;
	}
	return (i);
}
