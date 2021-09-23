/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:55:15 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 02:35:34 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// apply ft f to each char of the str passed aas argument,
// passsing its index as first argument. 
// each char is passed by to f to be modified if necessary.
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &(s[i]));
		i++;
	}
}
