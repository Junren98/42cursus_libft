/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjun-ren <tjun-ren@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:35:57 by tjun-ren          #+#    #+#             */
/*   Updated: 2021/10/01 23:32:30 by tjun-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// adds the element 'new' at the end of the list
#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	if (!new)
		return ;
	if (*lst)
	{
		ptr = ft_lstlast(*lst);
		ptr->next = new;
	}
	else
		*lst = new;
}

/*
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
		lst = lst->next;
	return (lst);
}

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

int main(void)
{
	t_list	*list1 = NULL;
	t_list	*ptr;
	ft_lstadd_back(&list1, ft_lstnew((void  *)10));
	printf("the content is list1->content = 1 %d\n", list1->content);
	//ptr = ft_lstlast(list1);

	ft_lstadd_back(&list1, ft_lstnew((void  *)2));
	printf("the content is list1->content = 1 %d\n", ptr->content);
}
*/