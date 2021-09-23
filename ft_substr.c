/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 23:05:34 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/17 15:55:14 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// substring begins at start and max size 'len'
// return substr, NULL if fails
// need to do start < len 
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*ptr_s;
	char	*substr;

	if (ft_strlen(s) < start)
		return (NULL);
	ptr = (char *) malloc (sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr_s = (char *)s;
	substr = ptr;
	while (len-- && *ptr_s)
		*ptr++ = *(ptr_s++ + start);
	*ptr = '\0';
	return (substr);
}