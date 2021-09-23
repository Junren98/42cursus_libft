/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:23:44 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/17 14:51:04 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks for any printable character including spacee
#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= 32) && (c <= 126));
}