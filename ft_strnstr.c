/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 21:43:36 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 02:36:05 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// locate a substring in a string
// locate first s2 occur in s1, where not more than n char is search
// char after '\0' is not search
// return s1, when s2 is empty. s2 no occurs in s1, NULL return.
// otherwise return a ptr to the 1st char of the 1st occur of s1 is returned.
// -lbsd
#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*ptr1;
	char	*ptr2;
	char	*re_ptr;

	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	if (*s2 == '\0')
		return (ptr1);
	while (n-- && *ptr1 != '\0')
	{
		re_ptr = ptr1;
		ptr2 = (char *)s2;
		while (*ptr1++ == *ptr2++)
			if (*ptr2 == '\0')
				return (re_ptr);
	}
	return (NULL);
}
