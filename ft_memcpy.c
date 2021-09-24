/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:51:20 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 03:20:11 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copy n bytes from memory area src to that of dest. 
// return a pointer to dest 
// does not allow overlap
#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ptr_dest;
	char	*ptr_src;

	if (!dest && !src)
		return (0);
	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	while (n--)
		*ptr_dest++ = *ptr_src++;
	return (dest);
}
