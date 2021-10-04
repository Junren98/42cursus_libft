/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:34:32 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/04 01:06:48 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return trim str, null if fails
// return a copy of s1 in which specified 'set' is removed from start to 
// end of the string 
// how to get the length 
// need another ft to return whether at this pointer is in trim
#include <stdlib.h>
#include "libft.h"

static int	first_position(const char *s1, const char *set)
{
	size_t	i;

	i = 0;
	while (ft_strchr(set, s1[i]) != 0 && i < ft_strlen(s1))
		i++;
	return (i);
}

static int	last_position(const char *s1, const char *set)
{
	size_t	i;

	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]) != 0)
		i--;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		i;
	int		j;
	char	*ptr;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return ((char *)s1);
	i = first_position(s1, set);
	j = last_position(s1, set);
	if (i > j)
		return (ft_strdup(""));
	ptr = (char *) malloc (sizeof(char) * (j - i + 1 + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + i, (j - i + 1 + 1));
	return (ptr);
}
