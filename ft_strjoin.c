/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:13:02 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/05/16 19:50:21 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

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
    {
        ns[i] = s1[i];
        i++;
    }
    j = 0;
    while(s2[j] != '\0')
        ns[i++] = s2[j++];
    return (ns);
}
