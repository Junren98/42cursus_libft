/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:59:13 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/23 17:05:05 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocate unused space for an array of nelem each of 
// whose size in bytes is elsize
// the space is init to all bits to 0, important
// return to pointer to the allocated space
// calloc(10, sizeof(int))
#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	if (nelem == 0 || elsize == 0)
		return (NULL);
	ptr = malloc (elsize * nelem);
	ft_memset(ptr, 0, (nelem * elsize));
	return (ptr);
}