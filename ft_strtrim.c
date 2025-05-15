/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-pdos <ana-pdos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 21:14:07 by ana-pdos          #+#    #+#             */
/*   Updated: 2025/05/13 21:14:08 by ana-pdos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"


int ft_start(char const *s1, char const *set)
{
    int start;
    int j;

    start = 0;
    while(s1)
    {   
        j = 0;
        while(set[j] != '\0')
        {
            if (s1[start] != set[j])
                j++;
            else if (s1[start] == set[j])
                break;  
        }
        if (s1[start] != set[j])
            break;
        start++;
    }
    return (start);
}

int ft_end(char const *s1, char const *set)
{
    int end;
    int j;

    end = ft_strlen(s1);
    while(s1)
    {
        j = 0;
        while(set[j] != '\0')
        {
            if (s1[end - 1] != set[j])
                j++;
            else if (s1[end - 1] == set[j])
                break;  
        }
        if (s1[end - 1] != set[j])
            break;
        end--;
    }
    return (end);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int start;
    int end;
    char *trim;

    end = ft_end(s1, set);
    start = ft_start(s1, set);
    trim = ft_substr(s1, start, (end - start));
    return (trim);
}


