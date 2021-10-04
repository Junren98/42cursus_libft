/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 18:07:25 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/04 21:45:34 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compares first n bytes(interpret as unsigned char) of the memory area of 
// s1 and s2 
// retval < 0, s1 < s2; retval = 0, s1 = s2; retval > 0, s1 > s2 
#include <stddef.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (s1 == s2 || n == 0)
		return (0);
	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n-- > 0)
	{
		if (*ptr1++ != *ptr2++)
		{
			if (*--ptr1 > *--ptr2)
				return (1);
			else
				return (-1);
		}
	}
	return (0);
}
