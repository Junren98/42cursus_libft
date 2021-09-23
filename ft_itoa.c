/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/21 12:17:49 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/09/24 02:21:48 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// convert integer to string, negative numbers must be handled
// return a string representing the integer, ret NULL if fails 
// need to reverse
#include <stdlib.h>
#include "libft.h"

static	int	nbr_len(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	ft_swap(char *a, char *b)
{
	char	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

static void	rev_str(char *str, int size)
{
	int	start;
	int	end;

	start = 0;
	end = size - 1;
	while (start < end)
	{
		ft_swap((str + start), (str + end));
		start++;
		end--;
	}
}

char	*ft_itoa(int n)
{
	char	*ptr;
	char	*ret;
	long	nbr;

	ptr = (char *) malloc (sizeof(char) * (nbr_len(n) + 1));
	if (!ptr)
		return (NULL);
	nbr = n;
	ret = ptr;
	if (nbr < 0)
		nbr = -nbr;
	else if (nbr == 0)
		*ptr++ = nbr + '0';
	while (nbr)
	{
		*ptr++ = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		*ptr++ = '-';
	*ptr = '\0';
	rev_str(ret, ft_strlen(ret));
	return (ret);
}
