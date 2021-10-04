/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:43:36 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/04 01:09:23 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locate a substring in a string
// locate first s2 occur in s1, where not more than n char is search
// char after '\0' is not search
// return s1, when s2 is empty. s2 no occurs in s1, NULL return.
// otherwise return a ptr to the 1st char of the 1st occur of s1 is returned.
// If	s2 is an empty string, s1 is returned; if s2 occurs nowhere
// in	s1, NULL is returned; otherwise a pointer to the first	character of
// the first occurrence of s2 is returned.

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*s2 == '\0')
		return ((char *)s1);
	while (i < n && s1[i] != '\0')
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (i + j < n && s1[i + j] == s2[j])
			{
				j++;
				if (s2[j] == '\0')
					return ((char *)&(s1[i]));
			}
		}
		i++;
	}
	return (NULL);
}
