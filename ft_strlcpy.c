/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:42:04 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/17 14:51:31 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// copies up to size - 1 characters from the NUL-terminated string src to dst, 
// NUL-terminating the result.
// return the total length of the string, len of src
// change to pointer
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}