/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 16:59:13 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/05 18:30:49 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocate unused space for an array of nelem each of 
// whose size in bytes is elsize
// the space is init to all bits to 0, important
// return to pointer to the allocated space
// calloc(10, sizeof(int))
#include "libft.h"
#include <stddef.h>

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*ptr;

	ptr = malloc (elsize * nelem);
	if (ptr == 0)
		return (NULL);
	ft_memset(ptr, 0, (nelem * elsize));
	return (ptr);
}
