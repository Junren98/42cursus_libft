/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 16:34:32 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 02:37:00 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return trim str, null if fails
// return a copy of s1 in which specified 'set' is removed from start to 
// end of the string 
// how to get the length 
// need another ft to return whether at this pointer is in trim
#include <stdlib.h>
#include "libft.h"

// to check for the char needed to be trim
static char	*valid_trim(char	*s1, char	*set)
{
	char	*ptr;

	ptr = s1;
	while ((*ptr == *set) && (*ptr))
	{
		ptr++;
		set++;
	}
	if (!(*set))
		return (ptr);
	return (s1);
}

// len of strim
static size_t	trim_len(char *s1, char *set)
{
	char	*ptr;
	size_t	count;

	count = 0;
	ptr = s1;
	while (*ptr)
	{
		ptr = ft_valid_trim(ptr, set);
		if (*ptr)
		{
			count++;
			ptr++;
		}
	}
	return (count);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ptr1;
	char	*ptr2;
	char	*ptr_m;
	char	*res;
	size_t	len;

	ptr1 = (char *)s1;
	ptr2 = (char *)set;
	len = trim_len(ptr1, ptr2);
	ptr_m = (char *) malloc (sizeof(char) * (len + 1));
	if (!ptr_m)
		return (NULL);
	res = ptr_m;
	while (*ptr1)
	{
		ptr1 = valid_trim(ptr1, ptr2);
		if (*ptr1)
			*ptr_m++ = *ptr1++;
	}
	*ptr_m = '\0';
	return (res);
}
