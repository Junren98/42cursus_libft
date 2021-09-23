/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:07:20 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 01:29:57 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// the initial portion of the string
// pointed to by nptr to int
// return the converted value or 0 on error
#include "libft.h"

int	ft_atoi(const char	*str)
{
	int		num;
	int		count_nve;
	char	*ptr;

	num = 0;
	count_nve = 1;
	ptr = (char *)str;
	while ((*ptr >= 9 && *ptr <= 13) || *ptr == 32)
		ptr++;
	if (*ptr == '-' || *ptr == '+')
	{
		if (*ptr == '-')
			count_nve = -1;
		ptr++;
	}
	while (*ptr >= 48 && *ptr <= 57)
	{
		num = num * 10;
		num = num + *ptr - '0';
		ptr++;
	}
	return (count_nve * num);
}
