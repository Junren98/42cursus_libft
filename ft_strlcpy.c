/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 22:42:04 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/27 01:14:26 by tjun-ren         ###   ########.fr       */
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
	size_t	len_src;
	char	*ptr_s;
	size_t	count;

	ptr_s = (char *)src;
	len_src = ft_strlen(src);
	count = (int)size;
	if (count > 0)
		while (--count != 0 && *ptr_s != '\0')
			*dest++ = *ptr_s++;
	if (count < size)
		if (size != 0)
			*dest = '\0';
	return (len_src);
}
