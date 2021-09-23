/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 15:38:54 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/17 16:33:28 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ret new str, null if fails
// allocate and result of concat of s1 and s2
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ptr1;
	char	*ptr2;
	char	*ptr;
	char	*res;

	ptr1 = (char *)s1;
	ptr2 = (char *)s2;
	ptr = (char *) malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ptr)
		return (NULL);
	res = ptr;
	while (*ptr1)
		*res++ = *ptr1++;
	while (*ptr2)
		*res++ = *ptr2++;
	*res = '\0';
	return (ptr);
}