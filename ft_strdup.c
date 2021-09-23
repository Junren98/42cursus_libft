/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 17:07:55 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 02:35:20 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns to a pointer to a new string which is a duplicate of string s. 
// memory for the new string is obtained with malloc 
// return pointer duplicate str , returns NULL when insuff mem available
#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*ptr;
	size_t	len;

	len = ((ft_strlen(src) + 1));
	ptr = (char *) malloc (len);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, src, len);
	return (ptr);
}
