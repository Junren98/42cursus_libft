/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar__fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:33:30 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/21 14:43:06 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  outputs the character 'c' to the given file descriptor
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}