/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 16:23:49 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 01:44:10 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// scan the initial n 'byte' of memory area pointed to by s for first instance
// of c. Both c and the bytes of the memory area pointed to by s, intepreted as 
// unsigned char
// return ptr that matches bytes, NULL if dont occur in the memory area
#include <stddef.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr++ == c)
			return (--ptr);
	}
	return (NULL);
}
