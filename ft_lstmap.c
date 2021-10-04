/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 10:33:07 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/02 16:08:49 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// return the new list or NULL when allocation fails
// iterates the list 'lst' with function 'f' to content of each element
// create a new list resulting of the successsive application of function 'f'
// 'del' funtion is used to delete teh content of an element if needed 
// return new list, null if fails 
#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*check_elem;
	t_list	*res;	

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		check_elem = ft_lstnew(f(lst->content));
		if (!check_elem)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, check_elem);
		lst = lst->next;
	}
	return (res);
}
