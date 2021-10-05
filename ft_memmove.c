/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 11:12:09 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/05 18:52:38 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//copy n bytes from memory area src to that of dest
//srcs -> temporary array => dest//
//write from behind to prevent overwriting the data 

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	ptr_dest = (unsigned char *)dest;
	ptr_src = (unsigned char *)src;
	if (!dest || !src)
		return (NULL);
	if (ptr_src > ptr_dest)
	{
		while (n--)
			*ptr_dest++ = *ptr_src++;
	}
	else
	{
		ptr_src = ptr_src + n - 1;
		ptr_dest = ptr_dest + n - 1;
		while (n--)
			*ptr_dest-- = *ptr_src--;
	}
	return (dest);
}
