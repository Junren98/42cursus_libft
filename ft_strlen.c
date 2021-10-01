/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:39:13 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/25 12:38:45 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// calculate the length of a string
#include <stddef.h>
#include "libft.h"

size_t	ft_strlen(const char *c)
{
	unsigned char	*p;

	p = (unsigned char *)c;
	while (*p)
		p++;
	return (p - (unsigned char *)c);
}
