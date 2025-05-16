/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:13:09 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/05/16 14:50:24 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stddef.h>


size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
    if (size > 0)
    {
	    while (dst[i] != '\0')
	    	i++;
	    while (src[j] != '\0')
	    {
	    	dst[i] = src[j];
	    	i++;
	    	j++;
	    }
    }
	dst[i] = '\0';
    i = 0;
    while(dst[i] != '\0')
		i++;
	return (i);
}