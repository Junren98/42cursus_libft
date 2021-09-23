/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 14:41:59 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 02:32:03 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//output the string s to the given file descriptor
#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
