/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 01:34:27 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 02:35:42 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// appends the NUL-terminated string src to the end of dst. 
// It will append at most 
// size - strlen(dst) - 1 bytes, NUL-terminating the result.
// change to pointer
#include <stddef.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	count_dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	count_dest = i;
	while ((i + 1 < size) && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[j] != '\0')
		j++;
	if (size >= count_dest)
		return (j + count_dest);
	else
		return (j + size);
}
