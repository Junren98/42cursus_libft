/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:40:38 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/17 14:49:17 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks for an alphabetic character; in the standard "C" locale, 
// it is equivalent to (isupper(c) || islower(c)). 
// In some locales, there may be additional characters 
// for which isalpha() is true-letters which are neither 
// upper case nor lower case.
#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}