/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 12:54:59 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 02:25:52 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// checks for an alphanumeric character; 
// it is equivalent to (isalpha(c) || isdigit(c)).
#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
