/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 23:03:42 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/01 15:34:04 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// allocate with malloc, returns new element
// the varialbe content is init with the val of param 'content'
// the varialbe 'next' is init to NULL
// malloc *ptr / t_list
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *) malloc(sizeof(t_list));
	if (!ptr)
		return (NULL);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
