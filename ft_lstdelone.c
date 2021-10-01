/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:28:56 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/01 11:13:07 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Take parameter an element and frees the memory of the element's content
// using function 'del' as param and free the element
// the memory of 'next' must not be freed
#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if ((!lst) || (!del))
		return ;
	del(lst->content);
	free(lst);
}
