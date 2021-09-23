/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:23:38 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 02:37:53 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert lowercase to uppercase
// return the converted letter or c if the conversion is not possible

int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		c -= 32;
	return (c);
}
