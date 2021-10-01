/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 10:36:17 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/02 00:22:33 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// delete and frees the given element and every successor of that element,
// using function 'del' and free
// pointer to the list must be set to NULL 
#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*temp;

	if (!del || !(*lst))
		return ;
	ptr = *lst;
	while (ptr)
	{
		temp = ptr->next;
		del(ptr->content);
		free(ptr);
		ptr = temp;
	}
	*lst = NULL;
}
