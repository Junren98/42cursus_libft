/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 18:02:19 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/23 16:34:28 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return the str created from teh successive app of f, ret NULL if fails
// apply ft f to each char of the strings to create a new string 
// result from successive applycations 
// mapping using index
#include <stdlib.h>
#include "libft.h"

/*size_t	ft_strlen(const char *c)
{
	char	*p;

	p = (char *)c;
	while (*p)
		p++;
	return (p - c);
}*/

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;
	size_t	len;

	if (!s || !f)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	if (!(ptr = (char *) malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
