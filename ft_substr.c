/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 23:05:34 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/03 15:44:58 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// substring begins at start and max size 'len'
// return substr, NULL if fails
// need to do start < len 
// if len more than strlen(s), need to set length to be needed 
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (s == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		ptr = (char *) malloc (sizeof(char) * (ft_strlen(s + start) + 1));
	else
		ptr = (char *) malloc (sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s + start, len + 1);
	return (ptr);
}
/*
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ptr;
	//char	*ptr_s;
	//char	*substr;

	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		ptr = (char *) malloc (sizeof(char) * (ft_strlen(s + start) + 1));
	else
		ptr = (char *) malloc (sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr_s = (char *)s;
	substr = ptr;
	while (len-- && *(ptr_s + start))
		*ptr++ = *(ptr_s++ + start);
	*ptr = '\0';
	return (ptr);
}*/
