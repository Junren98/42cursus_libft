/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 15:28:35 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 02:36:09 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// string scanning operation
// locate last occurrence of c (converted to char) in the string pointed to by s
// '\0' is included part of str 
// should use if(!*ptr_s)
// return pointer to the byte of a null pointer when c dont occur in the str
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*ptr_s;

	ptr = NULL;
	ptr_s = (char *)s;
	while (ptr_s)
	{
		if (*ptr_s == (char)c)
			ptr = ptr_s;
		if (!*ptr_s)
			return (ptr);
		ptr_s++;
	}
}
