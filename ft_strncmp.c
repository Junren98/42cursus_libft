/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 01:59:02 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/25 14:40:18 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compare part of two strings, not more than n bytes
// from the array pointed by s1 to that pointed to by s2
// return 
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n && *ptr1)
	{
		if (*ptr1++ != *ptr2++)
			return (*--ptr1 - *--ptr2);
		n--;
	}
	if (n)
		return (*ptr1 - *ptr2);
	else
		return (0);
}
