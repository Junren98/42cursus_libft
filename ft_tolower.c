/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:42:46 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/17 15:00:43 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert uppercase to lowercase
// return the converted letter or c if the conversion is not possible

int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
		c += 32;
	return (c);
}