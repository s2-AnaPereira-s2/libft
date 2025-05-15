/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:14:15 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/05/14 09:46:01 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

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
