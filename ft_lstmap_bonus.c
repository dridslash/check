/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnaqqad <mnaqqad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 11:34:38 by mnaqqad           #+#    #+#             */
/*   Updated: 2021/12/18 19:51:44 by mnaqqad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

node	*ft_lstmap(node *lst, void *(*f)(void *), void (*del)(void*))
{
	node	*new_list;
	node	*newnode;

	new_list = NULL;
	while (lst)
	{
		newnode = ft_lstnew((*f)(lst->data));
		if (newnode == NULL)
		{
			ft_lstclear(&new_list, del);
			return (0);
		}
		ft_lstadd_back(&new_list, newnode);
		lst = lst->next;
	}
	return (new_list);
}
// int main(void)
// {
// 	t_list *head;
// 	head=malloc(sizeof(t_list));
// 	head->content=ft_strdup("h1");
// 	head ->next=NULL;
// 	t_list *node;
// 	node=NULL;
// 	node=ft_lstnew(ft_strdup("h2"));
// 	ft_lstadd_front(&head,node);
// 	t_list *list=ft_lstmap(head,ff,dele);
// 	while(list)
// 	{
// 		printf("%s\n",list->content);
// 		list=list->next;
// 	}
// }