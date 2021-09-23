/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:02:12 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/17 14:49:20 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks whether c is a 7-bit unsigned char value that fits
// into the ASCII character set.
#include "libft.h"

int	ft_isascii(int c)
{
	return ((c >= 0) && (c <= 127));
}