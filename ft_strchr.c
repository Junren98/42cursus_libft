/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:01:53 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 02:35:13 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// returns a pointer to first occurence of the char c in the string s
// or NULL when char is not found, if c is '\0', 
// return pointer to the terminator
#include <stddef.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (ptr)
	{	
		if (*ptr == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}
