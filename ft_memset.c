/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:45:58 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/27 00:34:17 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fills the first n bytes of the memory area
// pointed to by s with the constant byte 
// returns a pointer to the memory area s
#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
		*ptr++ = (unsigned char)c;
	return (s);
}
