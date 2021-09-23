/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:36:20 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/23 17:04:10 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// erases data in n btyes of memory at the location pointed to by 
// writing zeros (bytes containing '\0')
// no return value
// need to use memset?
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}